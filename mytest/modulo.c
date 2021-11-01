#include<stdio.h>
#include<stdlib.h>

int main() {
    int idx;
    scanf("%d", &idx);
    int idx2 = idx % 3;
    printf("%d, %d\n", idx, idx2);

    int num = 100;
    int num2 = num % 3;
    printf("%d, %d\n", num, num2);

    int num3 = -11;
    int num4 = num3 % 3;
    printf("%d, %d\n", num3, num4);

    return 0;
}