#include <stdio.h>

void clear_input_buffer(void) {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}

int read_int(const char *prompt, int *value) {
    printf("%s", prompt);

    if (scanf("%d", value) != 1) {
        clear_input_buffer();
        return 0;
    }

    return 1;
}

int is_leap_year(int year) {
    if (year % 400 == 0) {
        return 1;
    }

    if (year % 100 == 0) {
        return 0;
    }

    return year % 4 == 0;
}

unsigned long long factorial(int number) {
    int i;
    unsigned long long result = 1;

    for (i = 1; i <= number; i++) {
        result *= (unsigned long long) i;
    }

    return result;
}

int is_prime(int number) {
    int i;

    if (number < 2) {
        return 0;
    }

    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int count_digits(int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    while (number > 0) {
        count++;
        number /= 10;
    }

    return count;
}

int power_int(int base, int exponent) {
    int result = 1;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int is_armstrong(int number) {
    int original = number;
    int digits = count_digits(number);
    int sum = 0;

    if (number < 0) {
        return 0;
    }

    while (number > 0) {
        int digit = number % 10;
        sum += power_int(digit, digits);
        number /= 10;
    }

    if (original == 0) {
        sum = 0;
    }

    return sum == original;
}

int reverse_number(int number) {
    int reversed = 0;

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}

void print_fibonacci(int terms) {
    int i;
    int first = 0;
    int second = 1;

    if (terms <= 0) {
        printf("Please enter a positive number of terms.\n");
        return;
    }

    printf("Fibonacci sequence: ");

    for (i = 1; i <= terms; i++) {
        int next;

        if (i == 1) {
            printf("%d ", first);
        } else if (i == 2) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }

    printf("\n");
}

void print_pattern(int rows) {
    int i;
    int j;

    if (rows <= 0) {
        printf("Please enter a positive number of rows.\n");
        return;
    }

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void handle_even_odd(void) {
    int number;

    if (!read_int("Enter a number: ", &number)) {
        printf("Invalid input.\n");
        return;
    }

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}

void handle_leap_year(void) {
    int year;

    if (!read_int("Enter a year: ", &year)) {
        printf("Invalid input.\n");
        return;
    }

    if (is_leap_year(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}

void handle_factorial(void) {
    int number;

    if (!read_int("Enter a non-negative integer: ", &number)) {
        printf("Invalid input.\n");
        return;
    }

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    printf("Factorial of %d is %llu\n", number, factorial(number));
}

void handle_fibonacci(void) {
    int terms;

    if (!read_int("Enter number of terms: ", &terms)) {
        printf("Invalid input.\n");
        return;
    }

    print_fibonacci(terms);
}

void handle_prime_check(void) {
    int number;

    if (!read_int("Enter a number: ", &number)) {
        printf("Invalid input.\n");
        return;
    }

    if (is_prime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
}

void handle_armstrong_check(void) {
    int number;

    if (!read_int("Enter a number: ", &number)) {
        printf("Invalid input.\n");
        return;
    }

    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
}

void handle_palindrome_check(void) {
    int number;

    if (!read_int("Enter a number: ", &number)) {
        printf("Invalid input.\n");
        return;
    }

    if (number < 0) {
        printf("Negative numbers are not treated as palindrome values here.\n");
        return;
    }

    if (number == reverse_number(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
}

void handle_pattern_print(void) {
    int rows;

    if (!read_int("Enter number of rows: ", &rows)) {
        printf("Invalid input.\n");
        return;
    }

    print_pattern(rows);
}

void show_menu(void) {
    printf("\n===== Number Cruncher =====\n");
    printf("1. Even or Odd\n");
    printf("2. Leap Year Check\n");
    printf("3. Factorial\n");
    printf("4. Fibonacci Sequence\n");
    printf("5. Prime Check\n");
    printf("6. Armstrong Check\n");
    printf("7. Palindrome Check\n");
    printf("8. Pattern Print\n");
    printf("9. Exit\n");
}

int main(void) {
    int choice;

    do {
        show_menu();

        if (!read_int("Enter your choice: ", &choice)) {
            printf("Please enter a valid menu option.\n");
            continue;
        }

        switch (choice) {
            case 1:
                handle_even_odd();
                break;
            case 2:
                handle_leap_year();
                break;
            case 3:
                handle_factorial();
                break;
            case 4:
                handle_fibonacci();
                break;
            case 5:
                handle_prime_check();
                break;
            case 6:
                handle_armstrong_check();
                break;
            case 7:
                handle_palindrome_check();
                break;
            case 8:
                handle_pattern_print();
                break;
            case 9:
                printf("Exiting Number Cruncher.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 9);

    return 0;
}
