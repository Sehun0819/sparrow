#include<stdio.h>
#include<stdlib.h>

int main () {
    int randint1;
    scanf("%d", &randint1);
    int randint2;
    scanf("%d", &randint2);

    int* arr = malloc (sizeof(int) * 100);
    int* tmp = arr + 4;
    sparrow_print(tmp);
    tmp[3] = 0;

    return 0;

}