#include<stdio.h>
#include<stdlib.h>

typedef struct _s {
    int index;
} s;

int main () {
    int arr[10];
    s s1;
    s1.index = 0;
    sparrow_print(s1);
    sparrow_print(s1.index);
    s1.index++;
    sparrow_print(s1.index);
    for (; s1.index < 10;) {
        sparrow_print(s1.index);
        arr[s1.index++] = 0;
    }

    /* int arr[10];
    int* p = malloc(sizeof(int));
    *p = 0;
    sparrow_print(*p);
    (*p)++;
    sparrow_print(*p);
    for (; *p < 10;) {
        sparrow_print(*p);
        arr[(*p)++] = 0;
    } */

    return 0;
}