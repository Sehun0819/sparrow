#include<stdio.h>
#include<stdlib.h>

int* buffer = 0;
int len = 0;
int capacity = 0;

void add_elem(int elem) {
    if (len >= capacity) {
        capacity += 20;
        //buffer = realloc(buffer, sizeof(int) * capacity);
        buffer = malloc(sizeof(int) * capacity);
    }

    buffer[len] = elem;
    ++len;
}

void print_buffer () {
    for (int i = 0; i < len; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
}

int main() {
    add_elem(10);
    add_elem(20);

    sparrow_print(buffer);
    sparrow_print(len);
    int a = buffer[len - 1];

    return 0;
}