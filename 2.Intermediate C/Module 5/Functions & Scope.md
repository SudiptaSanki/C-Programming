# Module 5: Functions & Scope

This module teaches how to break large programs into smaller reusable parts.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Declare, define, and call functions correctly.
- Pass values into a function and return results out of it.
- Explain local, global, and `static` variables.
- Understand call by value and pointer-based updates.
- Solve basic recursion problems.

---

## 2. Why Functions Matter

Functions make programs:

- Easier to read
- Easier to reuse
- Easier to debug
- Easier to test

Without functions, all logic stays inside `main()`, which quickly becomes difficult to manage.

---

## 3. Function Declaration, Definition, and Calling

```c
#include <stdio.h>

int add(int a, int b);

int main(void) {
    int result = add(10, 20);
    printf("Sum = %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
```

- Declaration tells the compiler about the function.
- Definition contains the actual logic.
- Calling means using the function in a program.

---

## 4. Parameters and Return Values

Parameters allow data to enter a function.

```c
float average(int total, int count) {
    return (float) total / count;
}
```

`return` sends a result back to the caller.

---

## 5. Scope and Lifetime

### Local Variables

Declared inside a function. They are available only there.

### Global Variables

Declared outside all functions. They can be used by multiple functions.

### Static Variables

A `static` local variable keeps its value between function calls.

```c
void visit_count(void) {
    static int count = 0;
    count++;
    printf("%d\n", count);
}
```

---

## 6. Call by Value vs Call by Reference

In C, arguments are passed by value by default. The function receives a copy.

```c
void change(int x) {
    x = 100;
}
```

If you want to modify the original variable, pass its address:

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

---

## 7. Recursion

Recursion is when a function calls itself.

Every recursive function needs:

- A base case
- A recursive case that moves toward the base case

Example:

```c
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
```

---

## 8. Module Exercises

1. Write a function to check whether a number is prime.
2. Write a function to find the maximum of three numbers.
3. Write a recursive function to find Fibonacci of `n`.
4. Swap two integers using pointer arguments.
5. Write a program that shows the effect of a `static` variable.

---

## 9. Quick Revision

- Functions reduce repetition.
- Prototypes help the compiler understand functions before use.
- Local variables exist only in their block.
- `static` preserves value between calls.
- Pointers let a function update original data.

Continue with the example programs in this folder before moving to Module 6.
