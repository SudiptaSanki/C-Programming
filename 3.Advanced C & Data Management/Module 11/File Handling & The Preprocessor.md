# Module 11: File Handling & The Preprocessor

This module teaches how to save data permanently and how the preprocessor shapes your code before compilation.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Open, read, write, and close files safely.
- Explain the difference between text files and binary files.
- Use `fprintf`, `fscanf`, `fread`, and `fwrite`.
- Define and use macros with `#define`.
- Explain header guards and why they matter.

---

## 2. File Basics

To work with files, use pointers of type `FILE *`.

```c
FILE *fp = fopen("data.txt", "w");
```

Always check if the file was opened successfully.

---

## 3. Text Files

Text files store human-readable data.

```c
fprintf(fp, "Name: %s\n", name);
fscanf(fp, "%d", &value);
```

These are useful for logs and simple record files.

---

## 4. Binary Files

Binary files store raw bytes exactly as they are in memory.

```c
fwrite(&record, sizeof(record), 1, fp);
fread(&record, sizeof(record), 1, fp);
```

They are compact and useful for structs.

---

## 5. The Preprocessor

The preprocessor runs before compilation.

Common uses:

- including header files
- creating constants
- conditional compilation

---

## 6. Macros

```c
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
```

Macros are text substitutions, so parentheses are important.

---

## 7. Header Guards

Header guards prevent the same header from being included more than once.

```c
#ifndef MATH_UTILS_H
#define MATH_UTILS_H

int add(int a, int b);

#endif
```

---

## 8. Module Exercises

1. Write text data to a file and read it back.
2. Store a struct in a binary file.
3. Create constant macros and function-like macros.
4. Create your own header file with header guards.
5. Build a small program that uses both file handling and a macro.

---

## 9. Quick Revision

- Files make data persistent.
- Text and binary files serve different purposes.
- `#define` creates macros.
- Header guards prevent duplicate inclusion issues.

You are now ready for Milestone 3.
