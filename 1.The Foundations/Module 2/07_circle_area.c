#include <stdio.h>

#define PI 3.14159f // Defining PI as a constant for clarity

int main(void) {
    float radius, area, circumference;

    printf("--- Circle Area Calculator ---\n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate memory
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // The %.2f specification formats the floating point number to 2 decimal places
    printf("\n--- Results ---\n");
    printf("Radius entered: %.2f\n", radius);
    printf("Circumference : %.2f\n", circumference);
    printf("Area          : %.2f\n", area);

    return 0;
}
