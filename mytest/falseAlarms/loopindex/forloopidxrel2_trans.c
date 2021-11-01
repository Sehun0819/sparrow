// aespipe-2.3e.c aes.c:1118
#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int* kt = arr;

    int i;
    for (i = 0; i < 5; i++) {
        printf("*kt: %d\n", kt[i]);
    }

    sparrow_print(i);
    sparrow_print(kt);

    return 0;

}