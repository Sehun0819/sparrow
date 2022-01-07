#include<stdio.h>
#include<stdlib.h>

int main() {
    int x = 0;
    switch (x) {
        case 0: x += 1; break;
        case 1: x += 2; break;
    }

    return 0;
}

//

/* int main(void) 
{ 
  int x ;

  {
  x = 0;
  {
  if (x == 0) {
    goto case_0;
  }
  if (x == 1) {
    goto case_1;
  }
  goto switch_default;
  case_0:
  x ++;
  goto switch_break;
  case_1:
  x += 2;
  goto switch_break;
  switch_default:
  x += 3;
  goto switch_break;
  switch_break: ;
  }
  return (0);
}
}
 */