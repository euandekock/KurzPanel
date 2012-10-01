#ifndef K_TABLE_H
#define K_TABLE_H

#include "juce.h"
#include "k_object.h"

/*
 * envelope parameter block
 */
class KurzTable : KurzObject
    {
public:
    enum KurzTableStatus
        {
        KTAB_MSG_EMPTY = 0,
        KTAB_MSG_BAD,
        KTAB_MSG_OK,
        KTAB_MSG_GOOD
        };

    KurzTableStatus Status;

    uint8 tabType;	/* = tableType */
    uint8 tabID;
    int16 tabSize;

    KurzTable() : tabType(0), tabID(0), tabSize(0)
        {
        }
    uint decode(uint8 *msg, uint loc)
        {
        tabType = msg[loc++];
        tabID = msg[loc++];
        tabSize = (uint8)msg[loc++] << 8 | (uint8)msg[loc++];

        switch(tabID)
            {
            case 1:
                cout << "Processing Control Source enum table Size (" << (int)tabSize << ")" << endl;
                for(uint count = 0; count < tabSize; count++)
                    {
                    cout << setw(5) << (dec) << (int)count << ": " << (isprint(msg[loc+count]) ? (char)msg[loc+count] : '.') << endl;
                    }

                for(uint count = 4; count < tabSize; count += 4)
                    {

                    cout << (dec) << setw(5) << count <<
                            " Type: " << (dec) << setw(5) << (uint)msg[loc] <<
                            " ID: " << (dec) << setw(5) << (uint)msg[loc + 1] <<
                            " ID: "
                            " Offset: " << setw(5) << (int)(msg[loc + 2] << 8 | msg[loc + 3]) << endl;
                    cout << "Near String: ";
                    p_hex(&msg[(msg[loc + 2] << 8 | msg[loc + 3]) - 13], 15);
                    loc+=4;
                    }
                break;
            case 4:
                cout << "Processing LFO rate enum table" << endl;
                for(uint count = 4; count < tabSize; count += 4)
                    {
                    cout << (dec) << setw(5) << count << " " << "Offset: " << (dec) << setw(5) << (int)(msg[loc] << 8 | msg[loc + 1]) << " Rate: " <<
                            setw(5) << fixed << setprecision(2) << (double)(msg[loc + 2] << 8 | msg[loc + 3])/100 << endl;
                    loc+=4;
                    }
                break;
            }

        if(loc%2)
            loc++;

        return loc;
        }
    void p_hex(uint8 *msg, uint count)
        {
        uint loc;

        for(loc = 0; loc < count; loc++)
            {
            if(isprint(msg[loc]))
                cout << msg[loc];
            else
                cout << ".";
            }
        cout << endl;
        }

    void display()
        {
        cout << "Table " << (int) tabID << endl;
        if(tabID > 0)
            {
            switch(tabID)
                {
                case 4:
                    cout << "LFO rate enum table" << endl;
                    break;
                }
            }
        else
            {
            cout << "empty" << endl;
            }
        }
    };


#endif // K_TABLE_H
