#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

void setPrice(struct car *c, float newPrice);
void updateName(struct car *c, char *newName);

int main (void) {

    struct car saturn;
    struct car saturn2 = {"Saturn SL/3", 16000.99, 180};
    
    saturn.name = "Saturn SL/2";
    saturn.price = 15999.99;
    saturn.speed = 175;

    printf("Name:           %s\n", saturn.name);
    printf("Price:          %f\n", saturn.price);
    printf("Speed:          %d\n", saturn.speed);

    printf("Name:           %s\n", saturn2.name);
    printf("Price:          %f\n", saturn2.price);
    printf("Speed:          %d\n", saturn2.speed);

    setPrice(&saturn2, 13999.99);
    updateName(&saturn2, "Saturn SL/2");
    printf("New Price:      %f\n", saturn2.price);
    printf("New Name:       %s\n", saturn2.name);
    
}

void setPrice (struct car *c, float newPrice) {
    //(*c).price = newPrice;
    c->price = newPrice;
}

void updateName(struct car *c, char *newName) {
    c->name = newName;
}