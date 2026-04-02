#include <stdio.h>

int square(int number);

int main(void) {
    int value = 6;

    printf("Square of %d is %d\n", value, square(value));
    return 0;
}

int square(int number) {
    return number * number;
}
