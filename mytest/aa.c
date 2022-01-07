#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p = malloc(10 * sizeof(int));

    int i;
    for (i = 0; i < 10; i++) {
        p[0] = 0;
        p++;
    }

    return 0;
}

int foo() {
  int x = 10;
  return x;
}

int bar() {
  int x = 100;
  return x;
}

/* int main(void) 
{ 
  int *p ;
  int tmp ;
  int i ;

  tmp = malloc(10UL * sizeof(int ));
  p = (int *)tmp;
  i = 0;

  while (1) {
    while_continue: ;
    if (! (i < 10)) {
      goto while_break;
    }
    *(p + 0) = 0;
    p ++;
    i ++;
  }
  while_break: ;

  return (0);
} */