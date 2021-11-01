#include<stdio.h>
#include<stdlib.h>

char* xmalloc (int n) { return malloc(n); }

void multi_glob (int size) {
    char* p = xmalloc (size);
    p[0] = 'a';

    int input; scanf("%d", &input);
    char* q = xmalloc (input);
    q[0] = 'a';
}

void f (int x) { multi_glob (x); }
void g () { multi_glob (4); }

int main() {
    f (8);
    f (16);
    g ();
    g ();

    return 0;
}