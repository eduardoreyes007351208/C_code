/*
    Program will create an array and fill it out 
    with random numbers
*/

// include libraries
#include <stdio.h>
#include <stdlib.h>

// function prototypes
int randNumGen (void);
void fillArr (int *p, int s);

// initialize main func
int main (void) {

    int size = 20;
    int arr1[size], *p1;
    int test = randNumGen();
    printf("%d\n", test);
    p1 = arr1;

    fillArr(arr1, size);

    for(int i = 0; i < size; i++) {
        printf("Arr[%d] is %d\n", i, arr1[i]);
    }

}

int randNumGen (void) {
    int randNumb = rand() % 1000;
    return randNumb;
}

void fillArr (int *p, int s) {

    for(int i = 0; i < s; i++) {
        int rand = randNumGen();
        p[i] = rand;
    }

}