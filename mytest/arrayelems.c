#include<stdio.h>
#include<stdlib.h>

int set_i(int* arr, int idx, int elem) {
    arr[idx] = elem;
}

int main() {
    /* int arr[5] = {0,0,0,0,0};
    sparrow_print(arr);
    
    set_i(arr, 0, 100);
    set_i(arr, 1, 200);
    set_i(arr, 2, 300);
    set_i(arr, 3, 400);
    set_i(arr, 4, 500);

    sparrow_print(arr);
    sparrow_print(arr[0]);
    sparrow_print(arr[1]);
    sparrow_print(arr[2]);
    sparrow_print(arr[3]);
    sparrow_print(arr[4]); */

    int* arr = malloc(5 * sizeof(int));
    arr[0] = 100;
    sparrow_print(arr);
    
    return 0;
}