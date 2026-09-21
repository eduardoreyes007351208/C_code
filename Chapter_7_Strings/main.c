#include <stdio.h>

int main (void) {
    
    char *s = "string";
    char string[14] = "Hello, World!";
    char stringS[] = "Hello World!";

    printf("%s\n", s);

    for (int i = 0; i < 13; i++) {
        printf("%c", stringS[i]);
    }

}