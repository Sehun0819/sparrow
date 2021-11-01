#include<stdio.h>
#include<stdlib.h>

int main () {
    int* p = malloc(sizeof(int) * 10);
    int* q = p + 10;

    int* tmp_p = p;
    int i;

    for (i = 0; i < 10; i++) {
        *(tmp_p + i) = 0;
        p++;
    }

    return 0;
}