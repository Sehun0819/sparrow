#include<stdio.h>
#include<stdlib.h>

void print(int* arr, int offset) {
    printf("elem: %d\n", arr[offset]);
}

int main() {
    int arr1[5] = {10,20,30,40,50};
    int offset1 = 4;
    print(arr1, offset1);

    return 0;
}

/* void print(int cond) {
    int a[3] = {100, 200, 300};
    int idx;
    if (cond) {
        idx = 2;
    } else {
        idx = 3;
    }

    printf("~~%d\n", a[idx]);
}

int main() {
    int cond;
    scanf("%d", &cond);
    
    if (cond) {
        print(cond);
    } else {
        print(!cond);
    }
    return 0;
} */