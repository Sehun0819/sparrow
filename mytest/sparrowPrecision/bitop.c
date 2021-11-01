#include<stdio.h>
#include<stdlib.h>

int main() {
    int buf[64];
    int idx;
    scanf("%d", &idx);

    buf[idx & 0x3f] = 0;
    int x = idx & 0x3f;
    sparrow_print(x);
    
    return 0;
}