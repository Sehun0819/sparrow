// a56-1.3+dfsg.c:139
// Can be precisely analyzed by sparrow with "-inline alloc" option
#include<stdio.h>
#include<stdlib.h>

struct struct1 {
    int id;
};

struct struct2 {
    int id;
    char* name;
};

int* alloc(int size ) 
{ 
  int* p = malloc(size);
  return p;
}

int main () {
    struct struct1* s1;
    struct struct2* s2;

    void* tmp0 = malloc(sizeof(*s1));
    s1 = (struct struct1*)tmp0;
    void* tmp1 = malloc(sizeof(*s2));
    s2 = (struct struct2*)tmp1;
    s1->id = 100;
    s2->id = 200;

    return 0;
}