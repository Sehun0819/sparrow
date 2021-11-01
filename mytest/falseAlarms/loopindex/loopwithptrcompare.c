// pointer comparison is not supported.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[64];
    int* itr = arr;
    int* end = itr + 64;

    while (itr < end) {
        *itr = 1;
        itr++;
    }

    return 0;
}