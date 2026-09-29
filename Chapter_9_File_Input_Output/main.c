#include <stdio.h>

int main(void) {

    FILE *fp;

    char s[1024];
    char name[1024];
    int linecount = 0;
    int c;
    float length;
    int mass;
    int x = 32;

    fp = fopen("hello.txt", "r");

    while((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    printf("\n");

    fclose(fp);

    fp = fopen("quote.txt", "r");

    while(fgets(s, sizeof(s), fp) != NULL) {
        printf("%d: %s", ++linecount, s);
    }
    fclose(fp);

    fp = fopen("whales.txt", "r");

    while(fscanf(fp, "%s %f %d", name, &length, &mass) != EOF) {
        printf("%s whale, %d tonnes, %.1f\n", name, mass, length);
    }
    fclose(fp);

    fp = fopen("output.txt", "w");

    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, World!", fp);

    fclose(fp);
}