# Module 10: Dynamic Memory Allocation

This module teaches how to request memory at runtime instead of depending only on fixed-size arrays.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Explain stack memory versus heap memory.
- Use `malloc`, `calloc`, `realloc`, and `free`.
- Check whether dynamic allocation succeeded.
- Resize dynamic memory safely.
- Prevent memory leaks and dangling pointers.

---

## 2. Stack vs Heap

- Stack memory is automatic and usually stores local variables.
- Heap memory is requested manually during program execution.

Heap memory gives flexibility, but it also gives responsibility.

---

## 3. `malloc`

`malloc` allocates a block of memory but does not initialize it.

```c
int *arr = malloc(5 * sizeof(int));
```

Always check for `NULL` after allocation.

---

## 4. `calloc`

`calloc` allocates memory and sets all bytes to zero.

```c
int *arr = calloc(5, sizeof(int));
```

This is useful when you want clean initial values.

---

## 5. `realloc`

`realloc` changes the size of an existing dynamic block.

```c
int *temp = realloc(arr, 10 * sizeof(int));
```

Use a temporary pointer so the original pointer is not lost if resizing fails.

---

## 6. `free`

`free` returns allocated memory back to the system.

```c
free(arr);
arr = NULL;
```

Setting the pointer to `NULL` after freeing helps avoid accidental reuse.

---

## 7. Common Memory Problems

- Memory leak: allocated memory is never freed
- Dangling pointer: pointer still points to freed memory
- Double free: freeing the same memory twice
- Out-of-bounds access: writing beyond allocated memory

---

## 8. Module Exercises

1. Allocate an integer dynamically and print its value.
2. Use `calloc` to allocate an array and print zero-initialized values.
3. Grow an integer array using `realloc`.
4. Read `n` values into a dynamically allocated array.
5. Free all allocated memory and set pointers to `NULL`.

---

## 9. Quick Revision

- Dynamic memory lives on the heap.
- `malloc` allocates, `calloc` allocates and clears.
- `realloc` resizes memory.
- `free` must be called for every successful allocation.

After this module, continue to Module 11 (File Handling & The Preprocessor).
