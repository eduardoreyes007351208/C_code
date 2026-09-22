#include <stdio.h>
#include <string.h>

int my_strLen (char *s);

int main(void)
{

    char *s = "Canta y no llores";
    char string[14] = "Hello, World!";
    char stringS[] = "Hello World!";
    char *t;
    char z[100];

    printf("%s\n", s);

    // Printing all char from array
    for (int i = 0; i < 13; i++)
    {
        printf("%c", stringS[i]);
    }

    printf("%zu\n", strlen(string));

    // testing a string length counter
    for (int i = 0; i < 13; i++)
    {
        if (stringS[i] == '\0')
        {
            printf("Null\n");
        }
        else
        {
            printf("%c\n", stringS[i]);
        }
    }


    // Practicing the custom string length function
    int strLength = my_strLen(s);
    printf("Length of string s (%s) is %d\n", s, strLength);

    // string copying practice
    t = stringS;

    printf("string stringS is %s\n", stringS);
    t[0] = 'z';
    printf("string stringS is %s\n", stringS);

    strcpy(z, string);

    z[0] = 'z';
    printf("string string is %s\n", string);
    printf("string z is %s\n", z);
}

int my_strLen (char *s) {
    int count = 0;

    while (s[count] != '\0') {
        count++;
    }

    return count;
}