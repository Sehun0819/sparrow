#include<stdio.h>
#include<stdlib.h>

int nth_elem (int* arr, int n) {
    return arr[n];
}

int main () {
    int arr1[5] = {10,20,30,40,50};
    int elem = nth_elem(arr1, 5);

    printf("result: %d\n", elem);

    return 0;
}