#include<stdio.h>
#include<stdlib.h>

int main () {
    int cond = 1;
    int* p = &cond;
    int x, y;
    sparrow_print(p);

    sparrow_print(cond);
    if (cond) {
        x = 100;
    } else {
        x = 200;
    }
    *p = 0;
    sparrow_print(cond);
    if (cond) {
        y = 100;
    } else {
        y = 200;
    }

    return 0;
}