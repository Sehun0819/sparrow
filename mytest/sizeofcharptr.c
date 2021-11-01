#include<stdio.h>
#include<stdlib.h>

int main() {
    char *paths[]={"/usr/bin/ntpdate","/bin/ntpdate",
	      	       "/usr/sbin/ntpdate","/sbin/ntpdate"};
    sparrow_print(paths);

    printf("sizeof paths: %lu\n", sizeof(paths));
    printf("sizeof paths[0]: %lu\n", sizeof(paths[0]));
    int i;
    sparrow_print(i);
    for (i = 0; i < sizeof(paths)/sizeof(paths[0]); i++) {
        sparrow_print(i);
	    printf("i: %d\n", i);
	}
    sparrow_print(i);

    return 0;
}