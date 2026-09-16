#include <stdio.h>

int main (void) {

    float f[4];

    f[0] = 3.14;
    f[1] = 6.28;
    f[2] = 2.00;
    f[3] = 9.99;

    for(int i = 0; i < 4; i++) {
        printf("Float at index %d is %f\n", i, f[i]);
    }

}