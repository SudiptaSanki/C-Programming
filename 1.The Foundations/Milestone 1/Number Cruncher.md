# Milestone 1: Number Cruncher

This is the Phase 1 capstone project.

Goal: Build a menu-driven C program that solves classic logic and number problems using everything from Modules 1 to 4.

---

## 1. Project Requirements

Your program should show a menu and let the user choose operations repeatedly until exit.

Minimum features:

1. Even/Odd checker
2. Leap Year checker
3. Factorial calculator
4. Fibonacci sequence up to `n` terms
5. Prime number checker
6. Armstrong number checker
7. Palindrome number checker
8. Simple pattern printing (triangle or pyramid)

---

## 2. Suggested Program Structure

Use one file first (`number_cruncher.c`) if you are beginner-level.

If comfortable, split into:

- `main.c`
- `number_utils.c`
- `number_utils.h`

Start simple, then refactor.

---

## 3. Recommended Menu Flow

```text
===== Number Cruncher =====
1. Even/Odd
2. Leap Year
3. Factorial
4. Fibonacci
5. Prime Check
6. Armstrong Check
7. Palindrome Check
8. Pattern Print
9. Exit
Enter choice:
```

Use `switch` for options and a loop to keep showing menu.

---

## 4. Logic Notes

- Even/Odd: `n % 2 == 0`
- Leap year:
  - divisible by 400 -> leap year
  - divisible by 100 -> not leap year
  - divisible by 4 -> leap year
  - else not leap year
- Factorial: iterative loop from 1 to `n`
- Prime: check divisibility from `2` to `sqrt(n)` (or `i * i <= n`)
- Armstrong: sum of digits raised to number-of-digits power
- Palindrome: reverse number and compare

---

## 5. Sample Starter Skeleton

```c
#include <stdio.h>

int main(void) {
    int choice;

    do {
        printf("\n===== Number Cruncher =====\n");
        printf("1. Even/Odd\n");
        printf("2. Leap Year\n");
        printf("3. Factorial\n");
        printf("4. Fibonacci\n");
        printf("5. Prime Check\n");
        printf("6. Armstrong Check\n");
        printf("7. Palindrome Check\n");
        printf("8. Pattern Print\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // call even_odd logic
                break;
            case 2:
                // call leap year logic
                break;
            case 3:
                // call factorial logic
                break;
            case 4:
                // call fibonacci logic
                break;
            case 5:
                // call prime logic
                break;
            case 6:
                // call armstrong logic
                break;
            case 7:
                // call palindrome logic
                break;
            case 8:
                // call pattern logic
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 9);

    return 0;
}
```

---

## 6. Testing Checklist

- Handles invalid menu choice.
- Handles edge values (`0`, `1`, negative inputs where relevant).
- Factorial handles non-negative integers only.
- Prime logic correctly rejects numbers less than 2.
- Program exits only when choice `9` is selected.

---

## 7. Evaluation Rubric

- Correctness: 50%
- Code clarity and formatting: 20%
- Input handling and validation: 20%
- Menu usability: 10%

---

## 8. Completion Definition

Milestone 1 is complete when:

- All minimum features work.
- Program runs without crashes for normal inputs.
- You can explain each logic block confidently.

After this milestone, you are ready to move into the next phase of C.
