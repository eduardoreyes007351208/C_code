#include <stdio.h>

void increment(int *p)
{
    *p += 1;
}

int main(void)
{

    int i = 20;
    int *j = &i;

    printf("i is %d\n", i);

    while (i < 45)
    {
        increment(j);

        printf("i is now %d\n", i);
    }
}
