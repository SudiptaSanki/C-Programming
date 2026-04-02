# Module 7: Strings

This module teaches how C stores and processes text using character arrays.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Explain how strings end with `\0`.
- Read strings safely using `fgets`.
- Print strings using `puts` and `printf`.
- Use common functions from `<string.h>`.
- Write manual string-processing logic using loops.

---

## 2. Strings in C

A string is a character array terminated by `\0`.

```c
char name[20] = "Ananya";
```

Memory contains characters followed by the null terminator.

---

## 3. String Input and Output

Use `fgets` for safe input:

```c
fgets(text, sizeof(text), stdin);
```

Use `puts` or `printf("%s", text)` to print strings.

Avoid `gets` because it is unsafe and removed from the standard library.

---

## 4. `<string.h>` Functions

Important library functions:

- `strlen` for length
- `strcpy` for copy
- `strcmp` for compare
- `strcat` for concatenate

These functions save time, but you should also know how to implement the logic manually.

---

## 5. Manual String Processing

Practice writing your own versions of:

- string length
- string copy
- string reverse
- palindrome check
- vowel/consonant counting

This strengthens loop and pointer understanding.

---

## 6. Common Mistakes

- Forgetting space for the null terminator
- Using `%s` with `scanf` for multi-word input
- Comparing strings using `==`
- Forgetting that `fgets` may store the newline character

---

## 7. Module Exercises

1. Find the length of a string without using `strlen`.
2. Copy one string into another without using `strcpy`.
3. Reverse a string.
4. Check whether a string is palindrome.
5. Count vowels, consonants, digits, and spaces.
6. Convert uppercase to lowercase and lowercase to uppercase.

---

## 8. Quick Revision

- Strings are arrays of `char`.
- `\0` marks the end of the string.
- `fgets` is safer than `scanf("%s", ...)` for full lines.
- Manual string practice is important for exams and interviews.

After this module, continue to Module 8 (Pointers).
