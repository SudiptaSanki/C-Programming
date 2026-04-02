# Module 4: Control Flow (Branching and Looping)

This module gives logic and repetition power to your programs.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Make decisions using `if`, `else if`, `else`, and `switch`.
- Repeat tasks using `for`, `while`, and `do-while`.
- Use `break` and `continue` correctly.
- Build nested loops for pattern problems.

---

## 2. Branching with `if`, `else if`, `else`

Example:

```c
#include <stdio.h>

int main(void) {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A\n");
    } else if (marks >= 75) {
        printf("Grade B\n");
    } else if (marks >= 50) {
        printf("Grade C\n");
    } else {
        printf("Grade D\n");
    }

    return 0;
}
```

---

## 3. Ternary Operator

Short form of `if-else`.

```c
int n = 7;
printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");
```

---

## 4. `switch` Statement

Use when there are multiple fixed choices.

```c
#include <stdio.h>

int main(void) {
    int choice;
    printf("1.Add 2.Subtract\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Add\n");
            break;
        case 2:
            printf("You chose Subtract\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
```

Remember: missing `break` causes fall-through.

---

## 5. Loops

### `for` loop

Best when number of iterations is known.

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```

### `while` loop

Best for condition-driven loops.

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```

### `do-while` loop

Runs at least once.

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```

---

## 6. Loop Control Statements

### `break`

Terminates loop immediately.

### `continue`

Skips current iteration and moves to next.

Example:

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;
    }
    if (i == 9) {
        break;
    }
    printf("%d ", i);
}
```

---

## 7. Nested Loops and Patterns

Simple right triangle:

```c
#include <stdio.h>

int main(void) {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

Nested loops are the foundation for pattern printing and matrix problems.

---

## 8. Module Exercises

1. Print whether a number is positive, negative, or zero.
2. Build a simple calculator using `switch` (`+`, `-`, `*`, `/`).
3. Print multiplication table of a number using `for` loop.
4. Reverse digits of a number using `while` loop.
5. Count digits in a number.
6. Print all even numbers from 1 to `n`.
7. Print a pyramid pattern of stars.

---

## 9. Quick Revision

- `if-else` handles conditional branching.
- `switch` is cleaner for fixed choices.
- Use `for` when count is known, `while` when condition controls repetition.
- `break` stops, `continue` skips.
- Nested loops unlock pattern and logic skills.

You are now ready for Milestone 1.
