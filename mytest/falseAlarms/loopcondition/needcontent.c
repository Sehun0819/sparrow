// acpid-2.0.21.c: acpid.c:296
#include<stdio.h>

int main() {
    int arr1[10] = {1,2,3,4,5,6,7,8,9,0};

    int* arr;
    for (arr = arr1; *arr; arr++) {
        printf("%d ", *arr);
    }
    printf("\n");
}