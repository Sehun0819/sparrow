#include<stdio.h>
#include<stdlib.h>

int main () {
    int len;
    scanf("%d", &len);

    int* arr = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        arr[i] = i;
    }

    return 0;
}