#include<stdio.h>

int main() {
  int a[5] = {0, 10, 20, 30, 40};

  int input;
  int cond;
  int idx;
  scanf("%d", &input);

  if (input) {
    cond = -1;
    if (cond) {
      idx = 4;
    } else {
      idx = 5;
    }
  } else {
    cond = 1;
    if (cond) {
      idx = 4;
    } else {
      idx = 5;
    }
  }

  printf("result: %d\n", a[idx]);

  return 0;
} 
