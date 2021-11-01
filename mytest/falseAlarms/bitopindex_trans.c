// agedu-r8642.c: httpd.c:399
// How to transform...?

#include<stdio.h>
#include<stdlib.h>

int main () {
    static const char base64_chars[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    int idx; scanf("%d", &idx);

    int temp_idx; scanf("%d", &temp_idx);
    sparrow_assume(0 <= temp_idx);
    sparrow_assume(temp_idx <= 0x3F);
    char c = base64_chars[temp_idx];

    return 0;
}