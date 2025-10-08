#include <stdio.h>

struct book
{
    char* title;
    char* author;
    float price;
};

int main() {

    struct book b1;

    scanf("%s",b1.title);
    scanf("%s",b1.author);
    scanf("%f",&b1.price);

    printf("Title of the book is %s\n", b1.title);
    printf("The author of the book is %s\n",b1.author);
    printf("The price of the book is %f\n",b1.price);

    return 0;
}