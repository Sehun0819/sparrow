// acpi-1.4.c: acpi.c:173
#include<stdio.h>
#include<stdlib.h>

int arr1[5] = {10,20,30,40,50};
int arr2[10] = {100,200,300,400,500,600,700,800,900,100};

int main () {
    int cond;
    scanf("%d", &cond);

    int* arr = cond ? arr1 : arr2;
    int n = cond ? 5 : 10;
    sparrow_print(n);

    for (int i = 0; i < n; i++) {
        sparrow_print(n);
        sparrow_print(i);
        printf("%d ", arr[i]);
    }

    return 0;
}