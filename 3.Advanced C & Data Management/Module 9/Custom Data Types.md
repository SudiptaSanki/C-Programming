# Module 9: Custom Data Types

This module teaches how to model real-world data using your own types.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Create and use `struct` types.
- Explain how a `union` differs from a `struct`.
- Use `enum` for readable named constants.
- Use `typedef` to simplify custom type names.
- Work with arrays of structs and pointers to structs.

---

## 2. Structures

A `struct` groups multiple values of different types under one name.

```c
struct Student {
    char name[50];
    int roll;
    float gpa;
};
```

This is useful when one entity needs multiple related fields.

---

## 3. Accessing Structure Members

Use the dot operator for normal variables:

```c
student1.roll = 101;
```

Use the arrow operator for pointers:

```c
ptr->roll = 101;
```

---

## 4. Unions

A `union` stores different members in the same memory location.

```c
union Data {
    int i;
    float f;
    char text[20];
};
```

Only one member should be treated as valid at a time.

---

## 5. Enumerations

`enum` gives readable names to integer constants.

```c
enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };
```

This improves code readability and avoids magic numbers.

---

## 6. Typedef

`typedef` creates an alias for a data type.

```c
typedef struct {
    char title[50];
    float price;
} Book;
```

Now you can write `Book b1;` instead of repeating the full struct syntax.

---

## 7. Arrays of Structs

You can store many records together:

```c
struct Student class_list[40];
```

This is very common for record management programs.

---

## 8. Module Exercises

1. Create a `Student` struct and print its fields.
2. Use `typedef` with a `Book` or `Employee` struct.
3. Write a program using an `enum` for menu options.
4. Store 3 student records in an array of structs.
5. Access a struct using a pointer and the `->` operator.

---

## 9. Quick Revision

- `struct` groups related fields.
- `union` shares memory between members.
- `enum` creates readable constants.
- `typedef` makes custom types cleaner.
- Arrays and pointers make structs more powerful.

After this module, move to Module 10 (Dynamic Memory Allocation).
