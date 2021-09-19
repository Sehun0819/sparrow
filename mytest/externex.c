#include<stdio.h>
extern int *__errno_location(void)  __attribute__((__const__)) ;

int main() {
    int* temp = __errno_location();
    int val = *temp;
    printf("return: %d\n", val);

    int a[] = {0,1,2,3,4};
    int b = a[val];

    return 0;
}