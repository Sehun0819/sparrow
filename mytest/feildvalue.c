#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct s {
    int id;
    char name[10];
};

int main() {
    struct s s1;
    s1.id = 99;
    strcpy(s1.name, "suturike");

    sparrow_print(s1.id);
    sparrow_print(s1.name);

    struct s* sptr = &s1;
    sparrow_print(sptr->id);
    sparrow_print(sptr->name);

    printf("id: %d, name: %s\n", s1.id, s1.name);

    return 0;
}