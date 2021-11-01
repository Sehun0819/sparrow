// aalib-1.4p5.c/aaregist.c:37
#include<stdio.h>
#include<stdlib.h>

int a = 100;
int* pp[10] = {&a, &a, &a, &a, &a,};

int main () {
    for (int i = 0; pp[i] != NULL; i++) {
        printf("%dth call..\n", i);
    }

    return 0;
}