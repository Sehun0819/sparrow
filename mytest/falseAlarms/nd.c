// a56-1.3+dfsg.c:146
// null dereference
#include<stdio.h>
#include<stdlib.h>

struct list {
    int elem;
    struct list* next;
};

struct list* curr = (struct list*)0;

struct list* add(int n) {
    struct list* new = malloc(sizeof(*new));
    if (new == 0) {
        exit(0);
    }
    new->elem = n;
    new->next = 0;
    //sparrow_print(curr);
    if (curr) {
        curr->next = new;
    }
    curr = new;

    return new;
}

void print_list(struct list* l) {
    printf("List: ");
    while (l) {
        printf("%d ", l->elem);
        l = l->next;
    }
    printf("\n");
}

int main() {
    struct list* hd = add(100);
    add(200);
    add(300);
    add(400);

    print_list(hd);

    return 0;
}