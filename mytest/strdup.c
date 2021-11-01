#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    char* a = "abcde";
    char* b = strdup(a);
    sparrow_print(a);
    sparrow_print(b);

    printf("a: %c\n", a[0]);
    printf("b: %c\n", b[0]);

    return 0;
}