#include<stdio.h>
#include<stdlib.h>

int main() {
    int t = 1;
    int f = 0;
    int unknown;
    scanf("%d", &unknown);
    sparrow_print(t);
    sparrow_print(f);
    sparrow_print(unknown);

    int a = t && f;
    int b = f && t;
    int c = t && unknown;
    int d = f && unknown;
    sparrow_print(a);
    sparrow_print(b);
    sparrow_print(c);
    sparrow_print(d);

    return 0;
}