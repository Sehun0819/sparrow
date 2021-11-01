#include<stdio.h>
#include<stdlib.h>

int main() {
    int a = 10;
    int* p = &a;

    int v = *p;
    sparrow_print(v);
    a = 20;
    v = *p;
    sparrow_print(v);
    sparrow_print(p);

    return 0;
}