// adjtimex-1.29.c: adjtimex.c:597
#include<stdio.h>
#include<stdlib.h>

int main() {
    char* fls[] = {
        "/dev/rtc",
        "/dev/rtc0",
        "/dev/misc/rtc",
        NULL
    };

    char* cmos_device;
    char** p = fls;
    while (cmos_device = *p++) {
        // operations on cmos_device...
    }

    return 0;
}