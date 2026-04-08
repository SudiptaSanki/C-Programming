#include <stdio.h>

int main(void) {
    int value;

    printf("--- Left and Right Shift Demo ---\n");
    printf("Enter an integer: ");
    scanf("%d", &value);

    // Using left shift (<< 1) effectively multiplies an integer by 2
    int mult_result = value << 1;
    // Using right shift (>> 1) effectively divides an integer by 2
    int div_result = value >> 1;

    printf("\nOriginal value                 : %d\n", value);
    printf("Multiplied by 2 (value << 1)   : %d\n", mult_result);
    printf("Divided by 2    (value >> 1)   : %d\n", div_result);

    printf("\nNote: Bitwise operations are significantly faster at a CPU level\n");
    printf("than standard arithmetic multiplication or division.\n");

    return 0;
}
