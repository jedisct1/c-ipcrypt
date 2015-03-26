
#ifndef ipcrypt_H
#define ipcrypt_H

#define IPCRYPT_BYTES 4
#define IPCRYPT_KEYBYTES 16

int ipcrypt_encrypt(unsigned char out[IPCRYPT_BYTES],
                    const unsigned char in[IPCRYPT_BYTES],
                    const unsigned char key[IPCRYPT_KEYBYTES]);

int ipcrypt_decrypt(unsigned char out[IPCRYPT_BYTES],
                    const unsigned char in[IPCRYPT_BYTES],
                    const unsigned char key[IPCRYPT_KEYBYTES]);
#endif
