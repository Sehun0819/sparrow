#include<stdio.h>
#include<stdlib.h>

int factorial (int n) {
    return n * factorial (n - 1);
}

int main () {
    int arr[5] = {10,20,30,40,50};
    int idx = factorial (5);
    printf("result: %d\n", arr[idx]);

    return 0;
}