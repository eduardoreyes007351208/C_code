/* Program that swaps two numbers with pointers */

// including libraries
#include <stdio.h>
#include <stdlib.h>

// function prototypes
int randGenerator(void);
void swapNumb(int *p, int *q);

// main function
int main (void) {

    // initialize numbers and pointers
    int num1, num2, *p1, *p2;

    // generate random numbers
    num1 = randGenerator();
    num2 = randGenerator();

    p1 = &num1;
    p2 = &num2;

    // print the numbers
    printf("Num 1 is %d | Num 2 is %d\n", num1, num2);
    // call swap function
    swapNumb(p1, p2);
    // print numbers after swap
    printf("Num 1 is now %d | Num 2 is now %d\n", num1, num2);

}

// randGenerator function def
int randGenerator(void) {
    int r = rand() % 1000;
    return r;
}
// swapNumb function def
void swapNumb(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}