#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum, diff, prod, mod;
    float quot;

    printf("--- Arithmetic Operations ---\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    
    // Check for division by zero before dividing
    if(num2 != 0) {
        quot = (float)num1 / num2; // Typecast for floating point result
        mod = num1 % num2;
    }

    // Output results
    printf("\n--- Results ---\n");
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, diff);
    printf("Product: %d * %d = %d\n", num1, num2, prod);
    
    if(num2 != 0) {
        printf("Quotient: %d / %d = %.2f\n", num1, num2, quot);
        printf("Remainder: %d %% %d = %d\n", num1, num2, mod);
    } else {
        printf("Cannot perform division/modulus by zero.\n");
    }

    return 0;
}
