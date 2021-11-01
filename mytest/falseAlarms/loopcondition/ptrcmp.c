#include<stdio.h>
#include<stdlib.h>

int main () {
    int* p = malloc(sizeof(int) * 10);
    int* q = p + 10;

    for (; p < q; p++) {
        *p = 0;
    }

    return 0;
}