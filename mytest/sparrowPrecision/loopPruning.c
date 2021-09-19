#include<stdio.h>
#include<stdlib.h>

int main() {
    int arr[5] = {10,20,30,40,50};
    int idx = 0;
    
    for (int i = 0; i < 0; i++) {
        idx--;
        break;
    }

    printf("val: %d\n", arr[idx]);

    return 0;
}