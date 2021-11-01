#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        exit(1);
    }

    char* arr = malloc(n);
    int i = 0;
    while (i <= n - 1) {
        sparrow_print(n);
        sparrow_print(i);
        arr[i] = 0;
        i = i + 1;
    }

    return 0;
}