# Module 3: Operators and Expressions

This module teaches how to process and compare values using operators.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Use arithmetic, relational, logical, assignment, and unary operators.
- Build correct expressions with operator precedence.
- Understand implicit and explicit type conversion.
- Apply basic bitwise operations.

---

## 2. Arithmetic Operators

- `+` addition
- `-` subtraction
- `*` multiplication
- `/` division
- `%` remainder (integers only)

Example:

```c
#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // integer division
    printf("a %% b = %d\n", a % b);
    return 0;
}
```

---

## 3. Relational Operators

Used for comparisons. Output is `1` (true) or `0` (false).

- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greater than or equal to
- `<=` less than or equal to

---

## 4. Logical Operators

- `&&` logical AND
- `||` logical OR
- `!` logical NOT

Example:

```c
int age = 20;
int has_id = 1;

if (age >= 18 && has_id) {
    printf("Eligible\n");
}
```

---

## 5. Assignment and Unary Operators

Assignment family:

- `=`
- `+=`, `-=`, `*=`, `/=`, `%=`

Unary operators:

- `++` increment
- `--` decrement

Example:

```c
int x = 10;
x += 5;   // x = 15
x--;      // x = 14
```

---

## 6. Operator Precedence (Important)

Common order (high to low):

1. `()`
2. unary (`++`, `--`, `!`)
3. `*`, `/`, `%`
4. `+`, `-`
5. relational (`<`, `>`, `<=`, `>=`)
6. equality (`==`, `!=`)
7. logical AND (`&&`)
8. logical OR (`||`)
9. assignment (`=` and compound forms)

When in doubt, use parentheses for clarity.

---

## 7. Type Conversion (Typecasting)

### Implicit Conversion

Compiler converts automatically.

```c
int a = 5;
float b = 2.0f;
float c = a + b;  // int converted to float
```

### Explicit Conversion

Programmer forces conversion.

```c
int total = 7, count = 2;
float avg = (float) total / count;  // 3.5
```

Without cast, integer division gives `3`.

---

## 8. Bitwise Basics

Bitwise operators work on binary bits of integers.

- `&` AND
- `|` OR
- `^` XOR
- `~` NOT
- `<<` left shift
- `>>` right shift

Example:

```c
#include <stdio.h>

int main(void) {
    int a = 5;   // 0101
    int b = 3;   // 0011

    printf("a & b = %d\n", a & b);   // 0001 -> 1
    printf("a | b = %d\n", a | b);   // 0111 -> 7
    printf("a ^ b = %d\n", a ^ b);   // 0110 -> 6
    printf("a << 1 = %d\n", a << 1); // 1010 -> 10
    printf("a >> 1 = %d\n", a >> 1); // 0010 -> 2
    return 0;
}
```

---

## 9. Module Exercises

1. Read two numbers and show all arithmetic results.
2. Check whether one number is divisible by another.
3. Compare three numbers and print whether first is largest.
4. Find average of three integers correctly using typecasting.
5. Input an integer and print:
   - number multiplied by 2 using `<<`
   - number divided by 2 using `>>`
6. Check if a number is even/odd using bitwise `&`.

---

## 10. Quick Revision

- Use correct operator for correct task.
- Be careful with integer division.
- Use typecasting when precision matters.
- Parentheses make expressions safer and easier to read.

After this module, continue to Module 4 (Control Flow).
