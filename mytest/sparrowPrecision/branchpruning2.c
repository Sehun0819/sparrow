#include<stdio.h>

int main() {
  int cond = 1;
  int* cond_ptr = &cond;
  sparrow_print(cond_ptr);
  int y = 2;
  sparrow_print(y);
  int z;

  if (cond) {
    sparrow_print(cond);
    z = y + 3;
    sparrow_print(y);
    sparrow_print(z);
  } else {
    sparrow_print(cond);
    z = y + 4;
    sparrow_print(y);
    sparrow_print(z);
  }

  sparrow_print(cond);
  sparrow_print(y);
  sparrow_print(z);

  return 0;
} 
