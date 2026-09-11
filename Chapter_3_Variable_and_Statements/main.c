/* Chapter 3 Variables and Statements */

#include <stdio.h>

int main(void) {
    int i = 2; // Holds signed integers
    float f = 3.14; // Holds signed floating point numbers
    char *s = "Hello, World!";

    int x = true; // setting variable x to false boolean
    char *cond = x == true? "x is true": "x is false";

    printf("%s\n", cond);


    printf("%s i = %d and f = %f!\n", s, i, f);

}