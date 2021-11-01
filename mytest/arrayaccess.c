#include<stdio.h>
#include<stdlib.h>
int main() {
  char* arr = malloc(5);
  int i;
  scanf("%d", &i);
  for (int j = 0; j < 5; j++) {
    arr[j] = 'a' + j;
  }
  if (i < 5) {
    printf("%c\n", arr[i]);
  } else {
    printf("out of bound\n");
  }
  return 0;
}