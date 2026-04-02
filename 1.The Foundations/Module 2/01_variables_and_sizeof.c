#include <stdio.h>

int main(void) {
    int age = 18;
    float height = 5.8f;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n\n", grade);

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}
