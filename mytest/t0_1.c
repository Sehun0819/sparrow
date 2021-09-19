#include<stdio.h>

int main() {
  int input;
  int cond;
  int divisor;

  scanf ("%d", &input);

  if (input) {
    cond = -1;
    if  (cond) {
      divisor = 1;
    } else {
      divisor = 0;
    }
  } else {
    cond = 1;
    if  (cond) {
      divisor = 1;
    } else {
      divisor = 0;
    }
  }

  printf("result: %d\n", 100 / divisor);

  return 0;
} 
