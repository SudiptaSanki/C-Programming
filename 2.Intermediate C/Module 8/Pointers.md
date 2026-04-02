# Module 8: Pointers

This module introduces direct memory access, one of the most important topics in C.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Print the address of a variable.
- Declare and use pointers.
- Dereference pointers safely.
- Understand pointer arithmetic.
- Explain the relationship between arrays and pointers.
- Use double pointers in simple examples.

---

## 2. Memory Addresses

Every variable is stored somewhere in memory.

```c
int num = 25;
printf("%p\n", (void *) &num);
```

`&num` means "address of `num`".

---

## 3. Pointer Variables

```c
int num = 25;
int *ptr = &num;
```

- `ptr` stores the address of `num`
- `*ptr` gives the value stored at that address

---

## 4. Dereferencing

If you change `*ptr`, the original variable changes too.

```c
*ptr = 40;
```

---

## 5. Pointer Arithmetic

When you add `1` to a pointer, it moves to the next element of its type.

```c
int arr[3] = {10, 20, 30};
int *p = arr;

printf("%d\n", *p);
printf("%d\n", *(p + 1));
printf("%d\n", *(p + 2));
```

---

## 6. Arrays and Pointers

In most expressions, the array name behaves like a pointer to the first element.

That is why:

```c
arr[i]
*(arr + i)
```

mean the same thing.

---

## 7. Double Pointers

```c
int x = 10;
int *p = &x;
int **pp = &p;
```

`**pp` reaches the original value.

---

## 8. Common Mistakes

- Using uninitialized pointers
- Dereferencing invalid addresses
- Mixing up `ptr` and `*ptr`
- Going out of bounds with pointer arithmetic

---

## 9. Module Exercises

1. Print the address and value of an integer.
2. Swap two integers using pointers.
3. Traverse an array using pointer arithmetic.
4. Write a function that updates a variable through its pointer.
5. Show that `arr[i]` and `*(arr + i)` are equivalent.

---

## 10. Quick Revision

- Pointers store addresses.
- `&` gets an address.
- `*` dereferences a pointer.
- Arrays and pointers are closely related.
- Pointer mistakes can cause serious bugs, so be careful.

You are now ready for Milestone 2.
