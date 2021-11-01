// admesh-0.95.c connect.c:188
// Analyzer doesn't trace elements of structure precisely.
#include<stdio.h>
#include<stdlib.h>

struct container {
    int size;
    int* buf;
};

void expand(struct container* con) {
    con->size++;
    con->buf = malloc(sizeof(int) * (con->size));
}

int main() {
    struct container con;
    expand(&con);
    expand(&con);
    sparrow_print(con);
    int* buf = con.buf;
    sparrow_print(buf);
    int size = con.size;
    sparrow_print(size);
    //printf("%d\n", con.buf[con.size - 1]);
    printf("%d\n", buf[size - 1]);

    return 0;
}