#include "bitmap.h"

byte bitmap[64] = { 0 };
byte* PrepareBitMap(byte* field_sent)
{
    byte bit = 0;

    for (byte curr_byte = 0; curr_byte < 8; curr_byte++)
    {
        for (byte index = 0; index < 8; index++)
        {
            field_sent[index] % 2 ? 1 : 0;
            bitmap[bit++] = ((field_sent[curr_byte]) & 0x01 << index) ? 1 : 0;
        }
    }
    return bitmap;


}