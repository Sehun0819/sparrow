// aes2501-wy-0.1.c aes2501.c:256
#include<stdio.h>
#include<stdlib.h>

typedef unsigned char uint8_t;
#define SEND(n) n
#define MSLEEP(ms) 0xff, (ms) & 0xff, ((ms) >> 8) & 0xff
#define ENDCMD 0
#define RECV(n) 0xfe, (n) & 0xff, ((n) >> 8) & 0xff

static void aesExec(uint8_t const *cmd)
{
    while (cmd[0] != 0) {
        sparrow_print(cmd);
        unsigned len = cmd[0];
        if (len == 0xff) {
            cmd += 3;
        } else if (len == 0xfe) {
            cmd += 3;
        } else {
            cmd += len + 1;
        }
    }
}

int main() {
    static uint8_t const cmd2[] = {
        MSLEEP(100),
        SEND(12), 0x80,0x01,0xa8,0x41,0x82,0x42,0x83,0x53,
                0x80,0x04,0x81,0x02,
        RECV(126),
        ENDCMD
    };
    static uint8_t const cmd3[] = {
        MSLEEP(200),
        SEND(2), 0xff,0x00,
        MSLEEP(80),
        SEND(12), 0x80,0x01,0xa8,0x41,0x82,0x42,0x83,0x53,
                0x80,0x04,0x81,0x02,
        RECV(126),
        ENDCMD
    };
    static uint8_t const cmd4[] = {
        SEND(14), 0x80,0x01,0x82,0x40,0xb0,0x27,0x94,0x0a,
                0x80,0x04,0x83,0x45,0xa8,0x41,
        ENDCMD
    };

    aesExec(cmd2);
    aesExec(cmd3);
    aesExec(cmd4);

    return 0;
}