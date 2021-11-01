#include<stdou.h>
#include<stdlib.h>

void *zalloc(int bytes) {
   void *buf;

   if (bytes <= 0) return 0;

   if (!(buf = malloc(bytes))) {
      fprintf(stderr, "*** FATAL ERROR ***\n"
                      "zalloc failed to allocate memory.\n"
                      "Request size: %d bytes.\n\nSorry.\n", bytes);
      abort();
   }

   memset(buf, 0, bytes);
   return buf;
}

int main () {
    int* arr = zalloc(sizeof(int) * 10);
    int* arr2 = zalloc(sizeof(int) * 20);
    int* arr3 = zalloc(sizeof(int) * 30);
    sparrow_print(arr);

    return 0;
}