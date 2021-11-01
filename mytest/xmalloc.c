#include<stdio.h>
#include<stdlib.h>

int main() {
    int* ptr = malloc(sizeof(int) * 10);
    sparrow_print(ptr);
    int* ptr2 = xmalloc(sizeof(int) * 10);
    sparrow_print(ptr2);

    return 0;
}