#include<stdio.h>
#include<stdlib.h>

int main() {
    int x = 10;
    int y = 20;
    int* p;

    int input;
    scanf("%d", &input);

    if (input) {
        p = &x;
    } else {
        p = &y;
    }

    sparrow_print(p);

    return 0;
}