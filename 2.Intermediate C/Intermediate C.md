# Phase 2: Intermediate C (College Syllabus)

Welcome to **Phase 2**! You've mastered the basics of logic and control flow. Now, it's time to unlock the true power of C: **Modularity and Memory**.

In this phase, we move beyond writing long, single-file scripts. You will learn how to break your code into reusable blocks (Functions), store collections of data efficiently (Arrays and Strings), and finally, take direct control of the computer's memory using C's most infamous and powerful feature: **Pointers**.

By the end of this phase, your code will look like it was written by a software engineer, not just a student.

---

## Module Overview

### Module 5: Functions & Scope (Writing Modular Code)
Stop writing everything inside `main()`. Let's build reusable tools.

* **The Anatomy of a Function:** Declaration (prototype), definition, and calling.
* **Parameters and Return Values:** Passing data in and getting results out.
* **Scope and Lifetimes:** Understanding Local, Global, and `static` variables. (Why `static` is your secret weapon).
* **Call by Value vs. Call by Reference:** The crucial difference between passing a copy of data versus passing the actual data location (Introduction to why we need pointers).
* **Recursion:** Functions that call themselves.
  * **Theory:** The Call Stack and Base Cases.
  * **Programs:** Recursive Factorial, Fibonacci sequence, and Sum of Digits.

### Module 6: Arrays & Matrices (Linear Data Collections)
Handling hundreds of variables without declaring them one by one.

* **1D Arrays:** Declaration, initialization, and memory layout (contiguous memory).
* **Array Traversing:** Iterating through arrays using loops.
* **Common Array Operations:** Finding the max/min, reversing an array, and basic linear search.
* **2D Arrays & Matrices:** Representing grids and tables (Row-major order).
* **Programs:** Matrix addition, Matrix multiplication (a classic college exam question), and finding the Transpose of a matrix.

### Module 7: Strings (Character Arrays)
How C handles text without a built-in "String" data type.

* **The Null Terminator:** Understanding how `\0` tells C where a string ends.
* **String I/O:** Safe reading and writing using `fgets` and `puts` (and why to avoid `gets`).
* **The `<string.h>` Library:** Using standard functions: `strlen` (length), `strcpy` (copy), `strcmp` (compare), and `strcat` (concatenate).
* **Manual String Manipulation:** Writing our own versions of standard string functions (Highly recommended for interview prep!).
* **Programs:** Reversing a string, checking for string palindromes, counting vowels/consonants/spaces, and converting case (Uppercase to Lowercase).

### Module 8: Pointers (The Heart of C)
This is what separates C programmers from the rest. Direct memory access.

* **Memory Addresses:** How RAM is structured and the `&` (address-of) operator.
* **The Pointer Variable:** Declaring pointers and the `*` (dereference) operator.
* **Pointer Arithmetic:** Adding and subtracting from memory addresses (moving through memory without indices).
* **Arrays and Pointers:** The concept of "Array Decay" (why `arr[i]` is exactly the same as `*(arr + i)`).
* **Double Pointers:** Pointers that point to other pointers (`**ptr`).
* **Pointers and Functions:** Passing arrays to functions efficiently using pointers.

---

## Milestone 2: The "Data Manipulator" Toolkit

To wrap up Phase 2, we will build a multi-functional terminal application. This project will require you to combine Functions, Arrays, Strings, and Pointers into one cohesive program.

**What you will build:**
A menu-driven command-line tool with two main modules:

1. **The Matrix Engine:**
   A system where the user can input dimensions for two matrices, fill them with data, and choose to Add, Multiply, or Transpose them.
   *Constraint:* All matrix passing between functions must be done using pointers to 2D arrays.
2. **The Text Analyzer:**
   A tool where the user inputs a paragraph of text.
   The program outputs statistics: Word count, character count, most frequent character, and a reversed version of the text.
   *Constraint:* You cannot use `<string.h>`. You must write custom pointer-based loops to analyze the character array.

---

**Ready for the next level?** Head into the `Module 5` folder to start writing your first custom function!
