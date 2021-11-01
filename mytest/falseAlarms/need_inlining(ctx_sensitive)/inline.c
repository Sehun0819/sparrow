// a56-1.3+dfsg.c:139
// Can be precisely analyzed by sparrow with "-inline alloc" option
// sparrow: false alarm / infer: no alarm
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
  if (!p) {
      exit(0);
  }
  return p;
}

int main () {
    struct struct1* s1;
    struct struct2* s2;

    s1 = alloc(sizeof(*s1));
    s2 = alloc(sizeof(*s2));
    sparrow_print(s1);
    sparrow_print(s2);
    s1->id = 100;
    s2->id = 200;

    return 0;
}