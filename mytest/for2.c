int main(void) 
{ 
  int arr[5] = {10,20,30,40,50};
  int idx =0;
  int i = 0;

  while (1) {
    while_continue: /* CIL Label */ ;
    if (! (i < 0)) {
      goto while_break;
    }
    idx --;
    goto while_break;
    i ++;
  }
  while_break: /* CIL Label */ ;

  printf("val: %d\n", arr[idx]);

  return (0);
}
