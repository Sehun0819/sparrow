#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        exit(1);
    }

    char* arr = malloc(n);
    int i;
    for (i = 0; i < n; i++) {
        sparrow_print(n);
        sparrow_print(i);
        arr[i] = 0;
    }

    return 0;
}