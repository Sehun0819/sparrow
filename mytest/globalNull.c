// a56-1.3+dfsg.c:146
#include<stdio.h>
#include<stdlib.h>

struct list {
    int elem;
    struct list* next;
};

//struct list* curr = (struct list*)0;

int main() {
    
    struct list* curr = 0;
    struct list* new;
    new = malloc(sizeof(*new));
    new->elem = 100;
    new->next = 0;
    //sparrow_print(curr);
    curr->next = new;

    return 0;
}