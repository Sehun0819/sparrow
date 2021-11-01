// agedu-8642.c: httpd.c:538
// how to transform...?

static const char chars[32] = "0123456789abcdefghjkmnpqrstuvxyz";

int v = 0;

k = i / 8 * 5;
for (j = 0; j < 5; j++)
    v |= ((passbuf[k+j] >> (i%8)) & 1) << j;

chars[v]; // alarm