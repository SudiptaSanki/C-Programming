#include <stdio.h>

int main(void) {
    int target, divisor;

    printf("--- Divisibility Checker ---\n");
    printf("Enter the number to be checked: ");
    scanf("%d", &target);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is undefined.\n");
        return 1;
    }

    // The modulo operator % returns 0 only when there is no remainder
    if (target % divisor == 0) {
        printf("%d is completely divisible by %d.\n", target, divisor);
    } else {
        printf("%d is NOT divisible by %d. Remainder varies by %d\n", target, divisor, target % divisor);
    }

    return 0;
}
