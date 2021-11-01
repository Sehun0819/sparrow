#include<stdio.h>
#include<stdlib.h>

int main () {
    char buf[8];
    int j = 0;
    do {
        sparrow_print(j);
        int i = buf[j];
    } while(++j < 8);

    return 0;
}