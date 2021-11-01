#include<stdio.h>
#include<stdlib.h>

typedef struct _s {
    int id;
    double value;
} s;

int main() {
    s* sptr = malloc(sizeof(s));
    sptr->id = 100;
    sptr->value = 0.0;

    sparrow_print(sptr->id);
    sparrow_print(sptr->value);
    
    return 0;
}