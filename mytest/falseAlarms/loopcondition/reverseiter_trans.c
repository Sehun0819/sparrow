#include<stdio.h>
#include<stdlib.h>

int main () {
    int len = 10;
    int* arr = malloc(sizeof(int) * len);

    int i = 0;
    while(i < len) {
        *(arr + i) = 0;
        i++;
    }

    return 0;
}