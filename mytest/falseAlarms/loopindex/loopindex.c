// aespipe-2.3e.c: sha512.c:116
#include<stdio.h>
#include<stdlib.h>

int main () {
    int buf[64];
    int* datap = buf;
    for (int i = 0; i < 16; i++) {
        datap[0] = 0;
        datap[1] = 1;
        datap[2] = 2;
        datap[3] = 3;
        datap += 4;
    }

    return 0;
}