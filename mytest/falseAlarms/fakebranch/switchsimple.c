#include<stdio.h>
#include<stdlib.h>

int main() {
    int x; scanf("%d", &x);
    int y;
    int z;

    switch (x) {
        case 1: y = 100; break;
        case 2: y = 200; break;
        default: y = 300; break;
    }

    switch (y) {
        case 100: z = 10000; break;
        case 200: z = 20000; break;
        default: z = 30000; break;
    }

    printf("%d\n", z);

    return 0;
}