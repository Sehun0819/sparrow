// agedu-r8642.c: httpd.c:399

#include<stdio.h>
#include<stdlib.h>

int main () {
    static const char base64_chars[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

    int idx; scanf("%d", &idx);
    char c = base64_chars[idx & 0x3F];

    return 0;
}