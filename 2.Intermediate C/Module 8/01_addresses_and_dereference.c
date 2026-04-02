#include <stdio.h>

int main(void) {
    int number = 25;
    int *ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", (void *) &number);
    printf("Value through pointer = %d\n", *ptr);
    return 0;
}
