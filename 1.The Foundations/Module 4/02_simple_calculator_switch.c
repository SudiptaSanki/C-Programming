#include <stdio.h>

int main(void) {
    int first;
    int second;
    int choice;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d\n", first + second);
            break;
        case 2:
            printf("Result: %d\n", first - second);
            break;
        case 3:
            printf("Result: %d\n", first * second);
            break;
        case 4:
            if (second != 0) {
                printf("Result: %d\n", first / second);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
