#include <stdio.h>

struct book
{
    char* title;
    char* author;
    float price;
};

int main() {

    struct book b1;

    b1.title = "Memamorphosis" ;
    b1.author = "Franz Kafka" ;
    b1.price = 138.5 ;

    printf("Title of the book is %s\n",b1.title);
    printf("The author of the book is %s\n",b1.author);
    printf("The price of the book is %f\n",b1.price);


    return 0;
}