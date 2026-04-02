# Milestone 2: Data Manipulator Toolkit

This is the Phase 2 capstone project.

Goal: Build a menu-driven C program that combines functions, arrays, strings, and pointers in one project.

---

## 1. Project Requirements

Your program should show a menu and let the user choose operations repeatedly until exit.

Minimum features:

1. Matrix addition
2. Matrix multiplication
3. Matrix transpose
4. Text character count
5. Text word count
6. Most frequent character
7. Reversed text output

---

## 2. Suggested Program Structure

Start with one file first:

- `data_manipulator.c`

If you want a challenge later, split into:

- `main.c`
- `matrix_utils.c`
- `text_utils.c`
- `utils.h`

---

## 3. Recommended Menu Flow

```text
===== Data Manipulator Toolkit =====
1. Matrix Engine
2. Text Analyzer
3. Exit
Enter choice:
```

Inside Matrix Engine:

```text
1. Add Matrices
2. Multiply Matrices
3. Transpose Matrix
4. Back
```

Inside Text Analyzer:

```text
1. Analyze Text
2. Back
```

---

## 4. Constraints

- Pass matrices between functions using pointer-based 2D array parameters.
- Do not use `<string.h>` inside the text analyzer logic.
- Use your own loops and pointer logic for text processing.

---

## 5. Logic Notes

- Matrix addition requires same dimensions.
- Matrix multiplication requires first matrix columns to match second matrix rows.
- Transpose swaps rows and columns.
- Word count can be built by detecting transitions from whitespace to non-whitespace.
- Most frequent character should ignore the newline left by `fgets`.

---

## 6. Testing Checklist

- Invalid menu choices are handled.
- Matrix dimensions are validated.
- Multiplication is rejected for incompatible sizes.
- Text analyzer works for spaces, punctuation, and mixed case.
- Reversed text is printed correctly.

---

## 7. Evaluation Rubric

- Correctness: 50%
- Function design: 20%
- Pointer usage: 15%
- Input handling: 15%

---

## 8. Completion Definition

Milestone 2 is complete when:

- All required features work.
- Matrix functions use pointer-based parameters.
- Text analysis is done without `<string.h>`.
- The program runs in a loop until the user exits.

After this milestone, you will be ready for more advanced C topics.
