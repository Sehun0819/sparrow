#include<stdio.h>
//#include<stdlib.h>
void* malloc(int size);

int main() {
    int* ptr = malloc(sizeof(int) * 10);
    ptr[5] = 1000000;
    int a[3] = {100,200,300};
    //int casted = (int)ptr;
    int b = a[val];
    int c = a[b];
    printf("result b: %d", b);

    return 0;
}