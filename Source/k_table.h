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
            case 4:
                cout << "Processing LFO rate enum table" << endl;
                for(uint count = 4; count < tabSize; count += 4)
                    {
                    cout << "Offset: " << (dec) << (int)(msg[loc] << 8 | msg[loc + 1]) << " Rate: " <<
                    (int)(msg[loc + 2] << 8 | msg[loc + 3]) << endl;
                    loc+=4;
                    }
                break;
            }

        if(loc%2)
            loc++;

        return loc;
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
