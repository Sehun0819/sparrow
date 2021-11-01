// semantcis of "strchr" seems not precise.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
    char line[10] = "abc:def:g";
    char* line2 = strchr(line, ':');

    sparrow_print(line);
    sparrow_print(line2);

    return 0;
}