#include<stdio.h>
#include<stdlib.h>

int main () {
    int len;
    scanf("%d", &len);

    int* arr = malloc(sizeof(int) * len);
    arr[len - 1] = 0;

    return 0;
}