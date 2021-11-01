// aespipe-2.3e.c aes.c:1062
// while "-narrow" option, # of alarms is reduced from 18 to 3.
#include<stdio.h>
#include<stdlib.h>

void aes_set_key(int n_bytes) {
    int nkey;
    int nrnd;
    int ekey[64];
    int* kf;
    int* kt;
    int kt_offset;
    int i = 0;

    switch(n_bytes) {
        case 32:
            nkey = 8;
            nrnd = nkey + 6;
            sparrow_print(nrnd);
            kf = ekey;
            kt_offset = 4 * (nrnd + 1) - nkey;
            sparrow_print(kf);
            sparrow_print(kt);
            ekey[4] = 16;
            ekey[5] = 20;
            ekey[6] = 24;
            ekey[7] = 28;
            do {
                sparrow_print(i);
                sparrow_print(kt_offset);
                (kf + i)[ 8] = (kf + i)[0];
                (kf + i)[ 9] = (kf + i)[1];
                (kf + i)[10] = (kf + i)[2];
                (kf + i)[11] = (kf + i)[3];
                (kf + i)[12] = (kf + i)[4];
                (kf + i)[13] = (kf + i)[5];
                (kf + i)[14] = (kf + i)[6];
                (kf + i)[15] = (kf + i)[7];
                i += 8;
            }
            while (i < kt_offset);
            break;
        case 24:
            nkey = 6;
            nrnd = nkey + 6;
            sparrow_print(nrnd);
            kf = ekey;
            kt_offset = 4 * (nrnd + 1) - nkey;
            sparrow_print(kf);
            sparrow_print(kt);
            ekey[4] = 16;
            ekey[5] = 20;
            do {
                (kf + i)[ 6] = (kf + i)[0];
                (kf + i)[ 7] = (kf + i)[1];
                (kf + i)[ 8] = (kf + i)[2];
                (kf + i)[ 9] = (kf + i)[3];
                (kf + i)[10] = (kf + i)[4];
                (kf + i)[11] = (kf + i)[5];
                i += 6;
            }
            while(i < kt_offset);
            break;
        default:
            nkey = 4;
            nrnd = 4 + 6;
            sparrow_print(nrnd);
            kf = ekey;
            kt_offset = + 4 * (nrnd + 1) - nkey;
            sparrow_print(kf);
            sparrow_print(kt);
            do {   
                (kf + i)[4] = (kf + i)[0];
                (kf + i)[5] = (kf + i)[1];
                (kf + i)[6] = (kf + i)[2];
                (kf + i)[7] = (kf + i)[3];
                i += 4;
            }
            while(i < kt_offset);
            break;

    }

    

    
}

int main() {
    aes_set_key(32);
    //aes_set_key(24);
    //aes_set_key(8);

    return 0;
}