#include <stdio.h>

int main (void) {

    float f[4];
    int x[12];
    int a[5] = {22, 33, 55};
    int row, col;
    int b[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 0}
    };

    f[0] = 3.14;
    f[1] = 6.28;
    f[2] = 2.00;
    f[3] = 9.99;

    for(int i = 0; i < 4; i++) {
        printf("Float at index %d is %f\n", i, f[i]);
    }

    printf("%zu\n", sizeof x);
    printf("%zu\n", sizeof(int));

    printf("%zu\n", sizeof x / sizeof(int));

    for(int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    for(row = 0; row < 2; row++) {
        for(col = 0; col < 5; col++) {
            printf("(%d, %d) = %d\n", row, col, b[row][col]);
        }
    }

}