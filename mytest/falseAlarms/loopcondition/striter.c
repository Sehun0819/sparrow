// aewan-1.0.01.c: aewl/util.c:59
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    char* str = "abcdefg";
    while (*str) {
        printf("%c", *str);
        str++;
    }

    return 0;
}