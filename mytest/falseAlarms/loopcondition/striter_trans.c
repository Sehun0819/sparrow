// aewan-1.0.01.c: aewl/util.c:59
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    char* str = "abcdefg";
    int nullidx = strlen(str);
    int i = 0;
    while (i < nullidx) {
        printf("%c", *(str + i));
        i++;
    }

    return 0;
}