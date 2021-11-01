// aespipe-2.3e.c aespipe.c:490
#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[64];
    int i = 0;
    while (i < 64) {
        arr[i] = i;
        arr[i + 1] = i + 1;
        arr[i + 2] = i + 2;
        arr[i + 3] = i + 3;
        arr[i + 4] = i + 4;
        arr[i + 5] = i + 5;
        arr[i + 6] = i + 6;
        arr[i + 7] = i + 7;

        i += 8;
    }
    
    return 0;
}