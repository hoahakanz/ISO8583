#include "bitmap.h"

 byte bitmap[64] = { 0 };
byte* PrepareBitMap(byte* field_sent)
{
    byte bit = 0;
   // byte bitmap[64] = { 0 };
    for (byte curr_byte = 0; curr_byte < 8; curr_byte++)
    {
        for (byte index = 0; index < 8; index++)
        {
            bitmap[bit++] = ((field_sent[curr_byte]) & 0x01 << 7 - index) ? 1 : 0;
        }
    }
    return bitmap;


}