#include<stdio.h>
#include<stdlib.h>

typedef unsigned int size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

struct str_t {
   char *str ;
   int len ;
   int mem ;
   long long dummy;
};

static void error(int status , int errnum , char const   *message  , ...) 
{ 
  va_list args ;
  char *tmp ;

  {
#line 289
  if (! interactive) {
    {
#line 291
    fflush(stdout);
#line 292
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)"%s: ",
            program_name);
    }
  }
  {
#line 295
  __builtin_va_start(args, message);
#line 296
  vfprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)message,
           args);
#line 297
  __builtin_va_end(args);
  }
#line 299
  if (errnum) {
    {
#line 300
    tmp = strerror(errnum);
#line 300
    fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)": %s",
            tmp);
    }
  }
  {
#line 301
  _IO_putc('\n', stderr);
#line 302
  fflush(stderr);
  }
#line 303
  if (status) {
    {
#line 304
    exit(status);
    }
  }
#line 305
  return;
}
}

static void *xmalloc(unsigned int size ) 
{ 
  void *ptr ;
  void *tmp ;

  tmp = malloc(size);
  ptr = tmp;
  if (! ptr) {
    error(1, 0, "virtual memory exhausted");
  }
  return (ptr);
}

int main() {

    struct str_t* str = 0;

    struct str_t* tmp = xmalloc(sizeof(*str));
    str = (struct str_t *)tmp;

    if (! str) {
        printf("NULL NULL NULL NULL %p\n", str);
        printf("size of str ptr: %d\n", sizeof(str));
        printf("size of *str: %d\n", sizeof(*str));
    } else {
        printf("LLUN LLUN %p\n", str);
        printf("size of str ptr: %d\n", sizeof(str));
        printf("size of *str: %d\n", sizeof(*str));
    }

    str->len = 10;


    /* if (! str) {
        tmp = xmalloc((size_t )sizeof(*str));
        str = (str_t *)tmp;
        tmp___0 = (size_t )64;
        str->mem = tmp___0;
        tmp___1 = xmalloc(tmp___0);
        str->str = (char *)tmp___1;
    } else {
        tmp___2 = (size_t )64;
        str->mem = tmp___2;
        tmp___3 = xrealloc((void *)str->str, tmp___2);
        str->str = (char *)tmp___3;
    } */

    return 0;

}