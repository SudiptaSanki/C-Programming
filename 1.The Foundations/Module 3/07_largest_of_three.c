#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("--- Largest of Three Numbers ---\n");
    printf("Enter three space-separated integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using relational (>, >=) and logical (&&) operators
    if (num1 >= num2 && num1 >= num3) {
        printf("The first number (%d) is the largest.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The second number (%d) is the largest.\n", num2);
    } else {
        printf("The third number (%d) is the largest.\n", num3);
    }

    // Checking if all are equal
    if(num1 == num2 && num2 == num3) {
        printf("Bonus output: All three numbers are actually equal!\n");
    }

    return 0;
}
