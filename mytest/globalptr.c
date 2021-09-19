// BUG: NULL assigned global pointer malfunctions.
#include<stdio.h>

int* ptr_glob1 = 0;
int* ptr_glob2 = NULL;

int main() {
    int* ptr_lcl1 = 0;
    int* ptr_lcl2 = NULL;
    sparrow_print(ptr_glob1);
    sparrow_print(ptr_glob2);
    sparrow_print(ptr_lcl1);
    sparrow_print(ptr_lcl2);

    return 0;
}