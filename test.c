
#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "ipcrypt.h"

int
main(void)
{
    unsigned char ip[4] = { 192, 168, 69, 42 };
    unsigned char k[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
    unsigned char out2[4];
    unsigned char out[4];
    unsigned char expected[4] = { 7, 117, 189, 224 };
    unsigned int  i;

    for (i = 0; i < 10000; i++) {        
        ipcrypt_encrypt(out, ip, k);
        ipcrypt_decrypt(out2, out, k);
        assert(memcmp(out2, ip, 4) == 0);
        memcpy(ip, out, 4);
    }
    assert(memcmp(out, expected, 4) == 0);

    return 0;
}
