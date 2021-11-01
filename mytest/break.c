#include<stdio.h>
#include<stdlib.h>

int main () {
    int x = 0;
    while(1) {
        sparrow_print(x);
        if (x > 100) break;
        sparrow_print(x);
        x++;
    }
    sparrow_print(x);
    printf("x: %d\n", x);

    return 0;
}