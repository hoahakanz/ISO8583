#include "ISO8583.h"
#include "bitmap.h"
int main()
{
    byte val[8] = "\x00\xFF\x05\xFF\xAA\xEE\x14\x25";
    printf("%d",sizeof(tagISO8583));
    byte * res = NULL;
    res = PrepareBitMap(val);
    puts("");
    for(int i = 0 ; i < 64 ; i++)
    printf("%u\n", res[i]);
    return 0;
}
  