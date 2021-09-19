#include<stdio.h>

int main() {
  int input;
  int cond;
  int cond2 = 1;
  int divisor;

  scanf ("%d", &input);

  if (input) {
    cond = -1;
  } else {
    cond = 1;
  }
  
  if  (cond && cond2) {
    divisor = 1;
  } else {
    divisor = 0;
  }

  printf("result: %d\n", 100 / divisor);

  return 0;
} 
