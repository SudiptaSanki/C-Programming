#include <stdio.h>

typedef struct {
    char title[40];
    float price;
} Book;

int main(void) {
    Book book = {"C in Depth", 499.50f};

    printf("Title: %s\n", book.title);
    printf("Price: %.2f\n", book.price);
    return 0;
}
