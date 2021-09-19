#include<stdio.h>

int main() {
  int arr[5] = {10,20,30,40,50};
  int cond = 1;
  int idx;

  if (cond) {
    idx = 4;
  } else {
    idx = 5;
  }

  printf("result: %d\n", arr[idx]);

  return 0;
} 
