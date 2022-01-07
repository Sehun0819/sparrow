int foo(int x, int y) {
int unknown;
if (unknown)
    return y + 2;
return x + 3;
}

int bar(void) {
return -1;
}

int main(void) {
int a, b, c;
a = foo(5, 7) + foo(6, 7) + bar();
b = 4;
c = b * b;
if (b > c)
    return b - c;
else
    return b + c;
}

//

int foo(int x , int y ) 
{ 
  int unknown ;

  {
  if (unknown) {
    return (y + 2);
  }
  return (x + 3);
}
}
int bar(void) 
{ 


  {
  return (-1);
}
}

int main(void) 
{ 
  int a ;
  int b ;
  int c ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  tmp = foo(5, 7);
  tmp___0 = foo(6, 7);
  tmp___1 = bar();
  a = (tmp + tmp___0) + tmp___1;
  b = 4;
  c = b * b;
  }
  if (b > c) {
    return (b - c);
  } else {
    return (b + c);
  }
}
}