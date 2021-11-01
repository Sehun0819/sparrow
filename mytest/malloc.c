#include<stdio.h>
#include<stdlib.h>

int* mymalloc(size) {
    int* p = malloc(size);

    if (p == NULL) {
        return NULL;
    }

    return p;
}

int main() {
    int* ptr = mymalloc(sizeof(int) * 10);
    sparrow_print(ptr);

    return 0;
}