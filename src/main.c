#include "ISO8583.h"
#include "bitmap.h"
int main()
{
    byte hexbitmap[8] = "\x00\xFF\x05\xFF\xAA\xEE\x14\x25";
    byte * res = NULL;
    res = PrepareBitMap(hexbitmap);
    for(int i = 0 ; i < 64 ; i++)
    printf("Field [%02d] = %u\n",i+1, res[i]);
    return 0;
}
  