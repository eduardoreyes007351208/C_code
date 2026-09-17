/* Chapter 3 Variables and Statements */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 2; // Holds signed integers
    float f = 3.14; // Holds signed floating point numbers
    char *s = "Hello, World!";

    int x = true; // setting variable x to false boolean
    char *cond = x == true? "x is true": "x is false";

    // sifeof variabe
    int a = 999;

    // do while practice
    int r;

    do {
        r = rand() % 100;
        printf("%d\n", r);
    } while (r!= 37);

    printf("%zu\n", sizeof a);
    printf("%zu\n", sizeof(2+7));
    printf("%zu\n", sizeof 3.14);

    printf("%s\n", cond);


    printf("%s i = %d and f = %f!\n", s, i, f);

    printf("%d * %d = %d\n", 3, 5, 3*5);

}