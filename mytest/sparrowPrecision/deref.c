// currently, {NULL} in if branch is not pruned.

#include<stdio.h>
#include<stdlib.h>

int main () {
    int* ptr = malloc(sizeof(int));
    sparrow_print(ptr);

    if (ptr) {
        sparrow_print(ptr);
    } else {
        sparrow_print(ptr);
    }

    return 0;
}