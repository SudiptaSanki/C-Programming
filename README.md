# C Programming Masterclass 🚀

Welcome to the **Complete C Programming Masterclass**. This repository serves as a comprehensive, structured course starting from absolute programming foundations all the way up to Data Structures, Algorithms, and Real-World Capstone projects.

This course is uniquely designed to provide not just theory, but runnable, heavily-commented `.c` files showing multiple approaches to problem-solving. It's built for students, interview prep, and systems-level enthusiasts.

---

## 🗂️ Course Index

### [Phase 1: The Foundations](./1.The%20Foundations/Foundations.md)
*The perfect starting point for absolute beginners learning how code turns into machine instructions.*
*   **Module 1: Introduction and Environment Setup** - Installing GCC, Editors, and your first C program.
*   **Module 2: Variables, Data Types, and Input/Output** - Memory allocation (`sizeof`), primitive types, safe `printf`/`scanf`, formatting.
*   **Module 3: Operators and Expressions** - Arithmetic, relational logic, explicit typecasting, and bitwise operations (`<<`, `&`, `|`).
*   **Module 4: Control Flow** - Branching (`if`, `switch`) and looping (`for`, `while`, nested loops).
*   **🏆 Milestone 1:** [Number Cruncher](./1.The%20Foundations/Milestone%201/Number%20Cruncher.md) - A menu-driven logic project combining Phase 1 concepts.

### [Phase 2: Intermediate C](./2.Intermediate%20C/Intermediate%20C.md)
*Unlocking Modularity and Memory access. Learn to write reusable blocks of code.*
*   **Module 5: Functions & Scope** - Prototypes, Call by Value vs Reference, Recursion, and Variable lifespans (`static`).
*   **Module 6: Arrays & Matrices** - 1D array traversal, basic sorting (Bubble Sort), string grids, and Matrix algebra.
*   **Module 7: Strings** - `\0` Null terminators, string parsing, `<string.h>` vs manual byte manipulation (Anagrams, Palindromes).
*   **Module 8: Pointers (The Heart of C)** - Memory addresses, `*` dereferencing, pointer arithmetic, and Double Pointers (`**`).
*   **🏆 Milestone 2:** [The Data Manipulator Toolkit](./2.Intermediate%20C/Milestone%202/Data%20Manipulator%20Toolkit.md) - Terminal app utilizing modular logic and pointers.

### [Phase 3: Advanced C & Data Management](./3.Advanced%20C%20&%20Data%20Management/Advanced%20C%20&%20Data%20Management.md)
*Managing memory dynamically and defining complex entities.*
*   **Module 9: Custom Data Types** - Grouping memory via `struct`, `union`, `enum`, and understanding raw Memory Padding.
*   **Module 10: Dynamic Memory Allocation** - Breaking fixed array limits using `malloc`, `calloc`, `realloc`, and `free`. 
*   **Module 11: File Handling & Preprocessor** - Persistent data saving via binary/text files (`fopen`, `fwrite`), Macro logic, and Command Line Arguments (`argc`, `argv`).
*   **🏆 Milestone 3:** [Persistent Phonebook](./3.Advanced%20C%20&%20Data%20Management/Milestone%203/Persistent%20Phonebook.md) - Dynamic array system backed by disk serialization.

### [Phase 4: Data Structures & Algorithms (DSA)](./4.DSA/Data%20Structures%20&%20Algorithms)
*Bridging the gap between working code and extremely efficient code.*
*   **Module 12: Time & Space Complexity** - Big O notation ($O(1)$, $O(N)$, $O(N^2)$) analysis in action.
*   **Module 13: Linear Data Structures** - Stacks, Queues, and dynamic node connections (Singly/Doubly Linked Lists).
*   **Module 14: Non-Linear Data Structures** - Basic Graphs and Binary Search Trees (BST), including recursive In-Order Traversals.
*   **Module 15: Searching & Sorting Algorithms** - Linear vs Binary Search, Bubble vs Merge Sort performance matching.
*   **🏆 Milestone 4:** [Inventory Visualizer](./4.DSA/Milestone%204/inventory_visualizer.c) - Warehouse system holding thousands of variables together via sorted Singly Linked Lists.

### [Phase 5: Real-World Capstone Projects](./5.Real-World%20Capstone%20Projects/Real-World%20Capstone%20Projects)
*Leaving the sandbox of academic programming. Add these systems-level scripts to your resume!*
1.  **Custom Command Line Shell (Mini-Bash):** Executing OS commands via `fork()` and `execvp()`.
2.  **Lightweight HTTP Web Server:** Reading and sending HTML across a network port via raw sockets (`<sys/socket.h>`).
3.  **Virtual Machine Bytecode Interpreter:** Simulating a real CPU interpreting Assembly language loops and memory addressing.

---

## 🛠️ How To Use This Repo
1. **Clone the repository:** `git clone https://github.com/SudiptaSanki/C-Programming.git`
2. **Follow the Modules:** Progress sequentially from `1.The Foundations/` to `4.DSA/`.
3. **Run the Code:** Each module is stuffed with `.c` implementations spanning multiple methods of logical problem solving. Open a terminal and compile them via GCC: `gcc filename.c -o filename.exe` -> `.\filename.exe`.

Happy coding!
