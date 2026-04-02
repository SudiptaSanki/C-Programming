# Phase 3: Advanced C & Data Management

Welcome to **Phase 3**! By now, you know how to write logic and manipulate memory. But real-world applications don't just deal with single integers or simple strings - they deal with complex entities like "Users", "Bank Accounts", or "Game Characters".

In this phase, you will learn how to create your own custom data types, manage computer memory dynamically (requesting memory only when you need it), and finally, save your data to files so it doesn't disappear when your program closes.

---

## Module Overview

### Module 9: Custom Data Types
Move beyond the basic `int` and `char`. Let's build our own types.

* **Structures (`struct`):** Grouping different data types together under one name (for example, a `Student` struct with a name, roll number, and GPA).
* **Unions:** Similar to structs, but sharing the same memory location.
* **Enumerations (`enum`):** Creating readable named constants (for example, `enum Days { MON, TUE, WED }`).
* **The `typedef` Keyword:** Giving your custom structures clean, easy-to-read aliases.
* **Complex Structures:** Arrays of structs, and pointers pointing to structs using the `->` operator.

### Module 10: Dynamic Memory Allocation
Breaking free from fixed-size arrays. Welcome to the Heap.

* **Stack vs. Heap Memory:** Understanding where local variables live versus where dynamic memory lives.
* **The `<stdlib.h>` Functions:**
  * `malloc()`: Allocating raw memory blocks.
  * `calloc()`: Allocating and zeroing out memory.
  * `realloc()`: Resizing previously allocated memory.
  * `free()`: Returning memory to the OS.
* **Memory Management:** Identifying and preventing memory leaks and dangling pointers.

### Module 11: File Handling & The Preprocessor
Making your data persistent and writing smarter compilation rules.

* **File Operations:** Opening, reading, writing, and closing files safely using `fopen` and `fclose`.
* **Text vs. Binary Files:** Using `fprintf` and `fscanf` for text, and `fread` and `fwrite` for binary data.
* **The Preprocessor (`#`):** What happens before the compiler runs.
* **Macros:** Defining constants and inline macro functions using `#define`.
* **Header Guards:** Using `#ifndef`, `#define`, and `#endif` to prevent multiple inclusions of the same header file.

---

## Milestone 3: The "Persistent Phonebook"

To complete Phase 3, you will build a Contact Management System that saves data permanently.

**What you will build:**

* Define a `Contact` struct with Name, Phone, and Email.
* Create a dynamic array of pointers to store contacts. As the user adds more contacts, use `realloc` to grow the array - no hardcoded limits.
* Provide a menu to Add, View, Search, and Delete contacts.
* **The Catch:** Every time the program exits, it must save the list of structs to a binary file (`contacts.dat`). Every time the program starts, it must read that file and rebuild the dynamic array in memory.

---

**Ready for the next level?** Head into the `Module 9` folder to start building your first custom data type.
