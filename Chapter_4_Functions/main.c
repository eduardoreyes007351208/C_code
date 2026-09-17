#include <stdio.h>

int plus_one(int n) {
    return n + 1;
}

int foo(void);

int main(void) {

    int i = 10, j;

    j = plus_one(i);

    int k = foo();

    printf("i + 1 = %d\n", j);
    printf("foo = %d\ng", k);

}

int foo(void) {
    return 4490;
}