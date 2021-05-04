#include "ISO8583.h"
#include "bitmap.h"
int main()
{
    
    byte hexbitmap[8] = "\x00\xFF\x05\xFF\xAA\xEE\x14\x25";
   
    byte *ptr= PrepareBitMap(hexbitmap);
    ptr = (byte*)calloc(64,sizeof(byte));
    free(ptr);
    for(int i = 0 ; i < 64 ; i++)
    printf("Field [%02d] = %u\n",i+1, bitmap[i]);
    
    return 0;
}
  