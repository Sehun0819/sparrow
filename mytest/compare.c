#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 10;
    int b; scanf("%d", &b);
    int c = a == b;
    sparrow_print(c);

    int arr[10];
    int* p = arr;
    int* p2 = p + 4;
    int result = p < p2;
    printf("p < p2: %d\n", result);
    sparrow_print(p);
    sparrow_print(p2);
    sparrow_print(result);

    return 0;
}