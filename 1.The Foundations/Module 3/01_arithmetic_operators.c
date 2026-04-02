#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b != 0) {
        printf("Division: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    } else {
        printf("Division and remainder are not possible because second number is 0.\n");
    }

    return 0;
}
