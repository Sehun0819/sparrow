#include<stdio.h>
#include<stdlib.h>

int main() {
    int* arr = 0;
    sparrow_print(arr);
    arr = realloc(arr, sizeof(int) * 5);
    sparrow_print(arr);
    for (int i = 0; i < 5; i++) {
        arr[i] = 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}