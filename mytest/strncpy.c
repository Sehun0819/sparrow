#include<stdio.h>
#include<string.h>

int main() {
    char src[4] = "abc";
    char dst[8] = "1234567";

    for (int i = 0; i < 8; i++) {
        src[i] = 'a' + i;
    }
    printf("before strncpy: %s\n", dst);
    strncpy(dst, src, 8);
    printf("after strncpy: %s\n", dst);

    return 0;
}