#include<stdio.h>
#include<stdlib.h>

int main () {
    int len = 10;
    int* arr = malloc(sizeof(int) * len);

    while(len--) {
        *(arr++) = 0;
    }

    return 0;
}