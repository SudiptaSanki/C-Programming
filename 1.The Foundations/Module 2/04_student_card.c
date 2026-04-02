#include <stdio.h>

int main(void) {
    int roll_number;
    float percentage;
    char section;

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Enter section: ");
    scanf(" %c", &section);

    printf("\n--- Student Card ---\n");
    printf("Roll Number: %d\n", roll_number);
    printf("Percentage: %.2f\n", percentage);
    printf("Section: %c\n", section);

    return 0;
}
