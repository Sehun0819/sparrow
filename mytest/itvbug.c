#include<stdio.h>
#include<stdlib.h>

int main () {
    //int cond;
    //scanf("%d", &cond);
    //sparrow_print(cond);
    sparrow_print(1);

    int n = 3;
    sparrow_print(2);

    for (int i = 0; i < n; i++) {
        sparrow_print(3);
        sparrow_print(i);
    }

    return 0;
}