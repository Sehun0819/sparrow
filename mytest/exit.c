#include<stdio.h>
#include<stdlib.h>

int main() {
    int cond;
    int offset;
    scanf("%d%d", &cond, &offset);

    int a[5] = {100, 200, 300, 400, 500};
    if (cond) {
        printf("5th: %d\n", a[4]);
    } else {
        exit(0);
        printf("6th: %d\n", a[5]);
    }

    return 0;
}