// aespipe-2.3e.c: aespipe.c:231
// aespipe-2.3e.c: aespipe.c:362
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int randLen;
    scanf("%d", &randLen);
    char* progName = malloc(randLen);
    for (int i = 0; i < randLen - 1; i++) {
        progName[i] = 'a' + i;
    }
    progName[randLen - 1] = '\0';

    int x = strlen(progName);
    char* h;
    if((h = malloc(x + 4)) != NULL) {
        strcpy(h, progName);
        strcat(h, ".py");
        printf("%s\n", h);
    }

    return 0;
}