// a56-1.3+dfsg.c:77
// sparrow raises false alarm, while infer does not.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int len;
    scanf("%d", &len);

    // Mem alloc and null checking
    char* src = malloc(len);
    char* dst = malloc(len-5);
    if ((!src) || (!dst)) {
        exit(0);
    }


    // Initialize source string.
    for (int i = 0; i < len - 1; i++) {
        src[i] = 'a' + i;
    }
    src[len - 1] = '\0';

    printf("before: %s\n", dst);
    strcpy(dst, src);
    printf("after: %s\n", dst);

    return 0;
}