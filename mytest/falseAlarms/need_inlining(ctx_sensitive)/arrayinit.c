// need "-inline malloc_and_assign" option.
#include<stdio.h>
#include<stdlib.h>

void* malloc(int size);

int* malloc_and_assign(int len) {
    int* arr = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        arr[i] = 0;
    }
}

int main () {
    int* arr1 = malloc_and_assign(10);
    int* arr2 = malloc_and_assign(20);
    int* arr3 = malloc_and_assign(30);

    return 0;
}