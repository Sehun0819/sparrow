// aespipe-2.3e.c aes.c:1062
// loop with stride + loop with pointer comparison + path sensitivity
#include<stdio.h>
#include<stdlib.h>

void aes_set_key(int n_bytes) {
    int nkey;
    int nrnd;
    int ekey[64];
    int* kf;
    int* kt;

    switch(n_bytes) {
        case 32:
            nkey = 8;
            break;
        case 24:
            nkey = 6;
            break;
        default:
            nkey = 4;
            break;
    }

    nrnd = (nkey > 4 ? nkey : 4) + 6;
    sparrow_print(nrnd);

    kf = ekey;
    kt = kf + 4 * (nrnd + 1) - nkey;
    sparrow_print(kf);
    sparrow_print(kt);

    switch(nkey)
    {
    case 4: do
            {   
                kf[4] = kf[0];
                kf[5] = kf[1];
                kf[6] = kf[2];
                kf[7] = kf[3];
                kf += 4;
            }
            while(kf < kt);
            break;

    case 6: ekey[4] = 16;
            ekey[5] = 20;
            do
            {   kf[ 6] = kf[0];
                kf[ 7] = kf[1];
                kf[ 8] = kf[2];
                kf[ 9] = kf[3];
                kf[10] = kf[4];
                kf[11] = kf[5];
                kf += 6;
            }
            while(kf < kt);
            break;

    case 8: cx->aes_e_key[4] = 16;
            cx->aes_e_key[5] = 20;
            cx->aes_e_key[6] = 24;
            cx->aes_e_key[7] = 28;
            do
            {   kf[ 8] = kf[0];
                kf[ 9] = kf[1];
                kf[10] = kf[2];
                kf[11] = kf[3];
                kf[12] = kf[4];
                kf[13] = kf[5];
                kf[14] = kf[6];
                kf[15] = kf[7];
                kf += 8;
            }
            while (kf < kt);
            break;
    }
}

int main() {
    aes_set_key(32);
    //aes_set_key(24);
    //aes_set_key(8);

    return 0;
}