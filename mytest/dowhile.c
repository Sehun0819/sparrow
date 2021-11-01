#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[64];
    for (int i = 0; i < 64; i++) {
        arr[i] = i;
    }
    int* base = arr;
    int i = 0;

    do {
        printf("arr[i]: %d\n", *(base + i));
        i += 4;
    } while (i < 52);

    return 0;
}