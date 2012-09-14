/*
 * kurz_sysex_msg.cpp
 *
 *  Created on: Jun 25, 2012
 *      Author: Euan de Kock
 */

#include "kurz_sysex_msg.h"

/*
 * Basic definition of a 7C sysex message List Item
 * The SYSEX message is broken into sets of 8 byte windows.
 * For each window, the 8th byte has special meaning
 *
 * For the first 8 byte window, the 7th and 8th byte is the length of the upcoming message
 * This length does not account for the special encoding, but is the actual decoded length value.
 *
 * For all subsequent 8 byte windows, the 8th byte (if available) contains a bitfield value,
 * where each bit is actually the MSB (8th bit) of each of the prior 7 bytes in the window
 *
 * EG. 01 02 03 04 05 06 07 70
 *     0
 *     1
 *        1
 *           1
 *              0
 *                 0
 *                    0
 *                       0
 * The diagram above shows how the 8th byte value of 0x70 (0111 0000) is mapped across to
 * all the previous 7 bytes. We ignore the MSB bit of the 0x70, as it too is constrained by
 * MIDI's 7 bit limit, so can never set the MSB bit.
 *
 * Within the decoded data, we can extract a set of data based on the following data structure:
 *      The Message First 8 bytes are as follows:
 *
 * 64 - Kurzweil Model: (0x64 = 1200)
 * 01 - 00 Dir Req, 01 Dir Resp, 02 Dump Req, 03 Dump Resp etc.
 * 50 - Object Type 50 = Program Request
 * 01 - ID Number
 * 00 - pSize[3]
 * 00 - pSize[2]
 * 00 - pSize[1]
 * 00 Bitfield

 * Second 8 Bytes (Specific to List Items from 0x7C messages)
 *
 * 6A pSize[0] of the Program storage in RAM or ROM
 * 53 Start of List Name  'S' |
 * 52                     'R' | Location (Heap)
 * 4F                     'O' |
 * 4D                     'M' |
 * 47                     'G' - Real Name starts here
 * 72                     'r'
 * 00 Bitfield
 *
 * The remaining sets of 8 byte windows represent additional character data
 * making up the list items name.
 *
 * The Final 8 byte window may not be a complete 8 byte set, but will end when a NULL
 * character is encountered WITHIN the 7 byte value set.
 * In the example below, the character data ends after the "2" character in "ano 2"
 * with a NULL value at location [5] in the window.
 *
 * 61 6E 6F 20 32 00 6F 00 61 41 F7
 * a  n  o     2  .. o  .. a  A  ..
 *
 * The SYSEX message is always completed with 3 bytes, a two byte chksum
 * value and the SYSEX EOX character 0xF7.
 *
 */


KurzSysexMsg::KurzSysexMsg(const uint8 *sysex_msg, const uint8 sysex_len) :
  Status(KSXMSG_EMPTY), pSize(0)
{
  uint8 count;
  uint8 bitfield;

  uint8 loc;
  uint8 new_loc;

  uint8 *chksum_calc;



  chksum_calc = chksum(&sysex_msg[8], sysex_len - 11); // Skip the first 8 Bytes, and the last three

  if (chksum_calc[0] != sysex_msg[sysex_len - 3] || chksum_calc[1] != sysex_msg[sysex_len - 2])
    {
      cout << "chksum Validation failed. Expected :"
           << uppercase << setfill('0') << setw(2) << hex
           << (int) sysex_msg[sysex_len - 3] << " "
           << (int) sysex_msg[sysex_len - 2] << " Got :"
           << (int) chksum_calc[0] << " " << (int) chksum_calc[1] << endl;

      Status = KSXMSG_BAD;
    }
  else
    {
      Status = KSXMSG_OK;

      pktNum = sysex_msg[5];

      pSize = (sysex_msg[6] << 7) | (sysex_msg[7]); // Length of 8 bit Byte values.

      if (sysex_len >= 8 + 3 + pSize + ((pSize + 6) / 7)) // Compared to extrapolated 7 bit byte length.
        {
          loc = 8; // Start from the second 8 byte window
          new_loc = 0;

          memset(Data, 0, MaxDataSize);

          while (new_loc < pSize)
            {
              /*
               * Locate the next bitfield value - which is either 7 bytes along,
               * or at the end of our message for the last one
               */
              if (new_loc + 7 < pSize)
                {
                  bitfield = sysex_msg[loc + 7];
                }
              else
                {
                  /*
                     * This is our last set of 7 bit values, so the bitfield will not be located
                     * on an exact byte boundary.
                     *
                     * This is a bit non-intuitive... (mixing 8 bit lengths with 7 bit ones)
                     * (pSize - new_loc) yields a value of how many 8 bit bytes
                     * are still to be processed IE Total 8 Bit length minus our current
                     * 8 bit Data location. This can be offset from out current location
                     * in the actual sysex message to get to the final bitfield value.
                     *
                     * We pre-shift the bitfield to compensate for its size...
                     */
                  bitfield = (sysex_msg[loc + pSize - new_loc]) << (7 - (pSize - new_loc));


                  cout << "Msg Len " << (int)pSize << " new_loc " << (int)new_loc << " shift " << (int)(7 - (pSize - new_loc)) << endl;
                  cout << "Using Bitfield at ["
                       << (int) loc + pSize - new_loc << "] Value: "
                       << hex << (int) bitfield << endl;
                }

              for (count = 0; count < 7 && new_loc < pSize; count++)
                {
                  Data[new_loc++] = sysex_msg[loc + count] | ((bitfield << (count + 1)) & 0x80);
                }
              loc += count + 1;
            }
          Data[new_loc] = '\0'; // Force a final CString terminator.

          //Type = (k_types) Data[2];

          //pSize = (Data[4] << 24) | (Data[5] << 16) | (Data[6] << 8) | (Data[7]);

          //ID = Data[3];

        }
      else
        {
          //Type = unknownType;
          //ID = pSize = 0;
          Status = KSXMSG_EMPTY;
        }
    }
}
KurzSysexMsg::~KurzSysexMsg()
{
}
/*
 * Calculate a Kurzweil format chksum value
 */
uint8 *KurzSysexMsg::chksum(const uint8 *msg, unsigned int len)
{
  static uint8 chkval[2];

  unsigned int count;
  unsigned short chksum = 0x00;

  for (count = 0; count < len; count++)
    chksum = ((chksum << 1) | (chksum >> 15)) + msg[count];

  chkval[0] = (uint8) (chksum >> 8) & 0x7f;
  chkval[1] = (uint8) chksum & 0x7f;

  return chkval;
}
