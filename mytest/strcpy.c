#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char src[4] = "abc";
    char* dst = malloc(4);
    sparrow_print(dst);

    strcpy(dst, src);

    return 0;
}