#include <stdio.h>

int main(void) {
    int number;
    int original_number;
    int reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original_number = number;

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    printf("Reverse of %d is %d\n", original_number, reversed);

    return 0;
}
