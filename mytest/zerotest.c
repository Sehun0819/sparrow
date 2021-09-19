#include<stdio.h>

int main() {
  int a[5] = {0,1,2,3,4};
  int idx;
  int cond = 1;
  if (cond) {
    idx = 4;
  } else {
    idx = 5;
  }
  int b = a[idx];

  printf("b: %d\n", b);

  return 0;
}
