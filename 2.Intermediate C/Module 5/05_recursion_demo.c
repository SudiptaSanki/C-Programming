#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main(void) {
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("Fibonacci of 7 = %d\n", fibonacci(7));
    printf("Sum of digits of 4821 = %d\n", sum_of_digits(4821));
    return 0;
}
