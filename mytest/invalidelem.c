#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char* arr = malloc(n);
    sparrow_print(arr);
    int v1 = arr[m];
    sparrow_print(v1);

    for (int i = 0; i < n; i++) {
        arr[i] = 1;
    }

    int v2 = arr[m];
    sparrow_print(v2);

    return 0;
}