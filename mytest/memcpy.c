#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char dst[5];
    char src[5] = "abcd";
    memcpy(dst, src, 5);

    return 0;
}