#include<stdio.h>
#include<string.h>

int main() {
    char* str = "abcdefg";
    char* substr = (str + 1);
    char* subsubstr = (substr + 1);
    char* subsubsubstr = (subsubstr + 1);
    int len1 = strlen(str);
    int len2 = strlen(substr);
    int len3 = strlen(subsubstr);
    int len4 = strlen(subsubsubstr);
    sparrow_print(str);
    sparrow_print(substr);
    sparrow_print(subsubstr);
    sparrow_print(subsubsubstr);
    sparrow_print(len1);
    sparrow_print(len2);
    sparrow_print(len3);
    sparrow_print(len4);

    printf("str: %s, substr: %s, subsubstr: %s, subsubsubstr: %s\n", str, substr, subsubstr, subsubsubstr);
    printf("len1: %d, len2: %d, len3: %d, len4: %d\n", len1, len2, len3, len4);

    return 0;
}