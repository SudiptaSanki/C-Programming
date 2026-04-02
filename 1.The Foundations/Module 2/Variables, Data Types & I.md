# Module 2: Variables, Data Types, and Input/Output

This module teaches how to store data, print it, and read user input correctly.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Declare and initialize variables.
- Pick the right data type for a value.
- Use `printf` format specifiers correctly.
- Read user input using `scanf` without basic mistakes.
- Use escape sequences for clean output formatting.

---

## 2. Variables and Declarations

A variable is a named memory location.

Basic syntax:

```c
int age;
float temperature;
char grade;
double pi;
```

Initialization:

```c
int age = 20;
float temperature = 36.5f;
char grade = 'A';
double pi = 3.1415926535;
```

Rules for variable names:

- Can contain letters, digits, and underscore.
- Cannot start with a digit.
- Cannot use C keywords (`int`, `return`, `if`, ...).
- C is case-sensitive (`marks` and `Marks` are different).

---

## 3. Primitive Data Types

Common beginner-level types:

- `int` -> whole numbers
- `float` -> decimal numbers (single precision)
- `double` -> decimal numbers (higher precision)
- `char` -> single character

Check memory with `sizeof`:

```c
#include <stdio.h>

int main(void) {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));
    return 0;
}
```

Note: exact sizes can vary by compiler/system, but `char` is always 1 byte.

---

## 4. `printf` and Format Specifiers

Use correct format specifiers to avoid incorrect output.

- `%d` for `int`
- `%f` for `float`
- `%lf` for `double` in `scanf` input
- `%c` for `char`
- `%s` for string (later modules)

Example:

```c
#include <stdio.h>

int main(void) {
    int age = 19;
    float cgpa = 8.45f;
    char section = 'B';

    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    printf("Section: %c\n", section);
    return 0;
}
```

`%.2f` means show 2 digits after decimal point.

---

## 5. Escape Sequences

Useful escape sequences:

- `\n` -> new line
- `\t` -> tab space
- `\\` -> backslash
- `\"` -> double quote

Example:

```c
printf("Name:\tRiya\n");
printf("Path:\\C\\Program Files\\\n");
```

---

## 6. Taking Input with `scanf`

Basic input pattern:

```c
#include <stdio.h>

int main(void) {
    int age;
    float marks;
    char grade;

    printf("Enter age, marks, grade: ");
    scanf("%d %f %c", &age, &marks, &grade);

    printf("Age=%d, Marks=%.2f, Grade=%c\n", age, marks, grade);
    return 0;
}
```

Important:

- Use `&` before non-array variables in `scanf`.
- Match data type with format specifier.
- Give inputs in the same order as format string.

### Common Input Buffer Issue

When reading `char` after numeric input, leftover newline can be captured.

Fix:

```c
scanf(" %c", &grade);
```

The leading space before `%c` skips whitespace/newline.

---

## 7. Practice Program: Student Card

```c
#include <stdio.h>

int main(void) {
    int roll;
    float percentage;
    char section;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    printf("Enter section (A/B/C): ");
    scanf(" %c", &section);

    printf("\n--- Student Card ---\n");
    printf("Roll: %d\n", roll);
    printf("Percentage: %.2f\n", percentage);
    printf("Section: %c\n", section);

    return 0;
}
```

---

## 8. Module Exercises

1. Read two integers and print their sum, difference, product, and quotient.
2. Read radius of a circle and print area (`pi * r * r`) with 2 decimal places.
3. Read a character and print its ASCII value.
4. Input basic employee details (id, salary, grade) and display in formatted output.
5. Write a program to swap two numbers using a third variable.

---

## 9. Quick Revision

- Variables store data in memory.
- Data type decides memory size and kind of value.
- `printf` prints, `scanf` reads.
- `&` in `scanf` is critical for basic variables.
- Use `" %c"` to avoid newline issues when reading a character.

Phase 1 progression: after this module, move to Module 3 (Operators and Expressions).
