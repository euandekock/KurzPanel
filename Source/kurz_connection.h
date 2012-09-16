/*
 * Kurz.h
 *
 *  Created on: Jun 16, 2012
 *      Author: Euan de Kock
 */

#ifndef kurz_connection_H_
#define kurz_connection_H_

/*
This probably knows too much, and should be restricted to using a controller out there somewhere to manage the underlying object types
*/
#include "../JuceLibraryCode/JuceHeader.h"
//#include "k_dir.h"

#include <iostream>
#include <iomanip>
#include <deque>

using namespace std;

#define K_KEY_0 0x00
#define K_KEY_1 0x01
#define K_KEY_2 0x02
#define K_KEY_3 0x03
#define K_KEY_4 0x04
#define K_KEY_5 0x05
#define K_KEY_6 0x06
#define K_KEY_7 0x07
#define K_KEY_8 0x08
#define K_KEY_9 0x09
#define K_KEY_PLAY 0x10
#define K_KEY_MODE 0x11
#define K_KEY_CHAN_UP 0x12
#define K_KEY_CHAN_DN 0x13
#define K_KEY_CHAN_DD 0x14
#define K_KEY_PROG_UP 0x15
#define K_KEY_PROG_DN 0x16
#define K_KEY_PROG_DD 0x17
#define K_KEY_VAL_UP 0x18
#define K_KEY_VAL_DN 0x19
#define K_KEY_VAL_DD 0x1A
#define K_KEY_ENTER 0x1B
#define K_KEY_STORE 0x1C
#define K_KEY_A 0x20
#define K_KEY_B 0x21
#define K_KEY_C 0x22
#define K_KEY_DISPLAY 0x7F

/*
enum KObjectType
    {
    K_REQ_SIZE = 0x42
    };
*/

enum KURZ_CONNECT_STATE
    {
    KSTATE_INIT = 0,
    KSTATE_LVL0,
    KSTATE_LVL1,
    KSTATE_LVL2,
    KSTATE_LVL3,
    KSTATE_NEWMSG,
    KSTATE_INMSG
    };

/*
 * Class to track the state of a remote sysex connection to a remote
 * Kurzweil device.
 *
 * The system processes a three state connection protocol up to the final connected state.
 *
 * When the connection is in the connected state, it is OK to send SYSEX requests.
 * Once a message is initiated, we move into the NEWMSG state until we have successfully
 * read all messages up to a blank terminating message. We then set the State back to LVL3
 *
 * TODO We will need to track the CONNECT status over time and revert back to INIT state when
 * a defined amount of time has passed. Might be an idea to start a timer, and keep resetting
 * it on each incoming message to ensure we can safely back out when the system fails to
 * send a correct message.
 */

// Fwd declarations...
class  KurzDirEntry;
class KurzLFOShape;
class KurzProgram;
class KurzDir;

class KurzConnection
    {
    KURZ_CONNECT_STATE state;
    uint8 localConnectID;
    uint8 remoteConnectID;
    uint8 packetCount;
    MidiOutput *midiOutput;

    // The initial message we requested to send - held here until we are ready to send it
    // Should probably be a copy of the original message so it doesn't get deleted by anyone...

    deque<string> &sendQueue;
    KurzDir &listDir;

public:


    KurzDirEntry *item;
    KurzLFOShape *lfo_item;
    KurzProgram *prog_item;

    KurzConnection(uint8 localID, uint8 remoteID, MidiOutput *midiOutChannel, deque<string> &inQueue, KurzDir &outDir);
    ~KurzConnection();

int isConnected()
    {
    return state >= KSTATE_LVL3 ? 1 : 0;
    }

    void processMessage(const uint8 *in_msg, unsigned int in_len);
    void print_data(const uint8 *msg, unsigned int len);
    void sendDataPacket(const uint8 *in_msg, unsigned int in_len);
    };




#endif /* kurz_connection_H_ */
