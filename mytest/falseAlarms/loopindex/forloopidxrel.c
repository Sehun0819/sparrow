// aespipe-2.3e.c aes.c:1118
#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int* kt = arr + 5;

    int i;
    for (i = 0; i < 5; i++) {
        kt -= 1;
        printf("*kt: %d\n", *kt);
    }

    sparrow_print(i);
    sparrow_print(kt);

    return 0;

}