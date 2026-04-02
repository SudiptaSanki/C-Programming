# Module 6: Arrays & Matrices

This module teaches how to store and process collections of data efficiently.

---

## 1. Learning Goals

By the end of this module, you should be able to:

- Declare and initialize 1D arrays.
- Traverse arrays using loops.
- Find max, min, reverse, and search operations.
- Work with 2D arrays as matrices.
- Solve matrix addition, multiplication, and transpose problems.

---

## 2. 1D Arrays

An array stores multiple values of the same type in contiguous memory.

```c
int marks[5] = {78, 84, 91, 67, 88};
```

Indexes start from `0`.

---

## 3. Traversing Arrays

```c
int i;
for (i = 0; i < 5; i++) {
    printf("%d ", marks[i]);
}
```

Traversal is required for almost every array problem.

---

## 4. Common Operations

- Sum and average
- Maximum and minimum
- Reverse
- Linear search

These operations are good practice for loops, conditions, and swapping logic.

---

## 5. 2D Arrays and Matrices

Matrices are stored as 2D arrays.

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Access elements using row and column indexes like `matrix[i][j]`.

---

## 6. Matrix Addition

Two matrices can be added only if they have the same dimensions.

```c
sum[i][j] = a[i][j] + b[i][j];
```

---

## 7. Matrix Multiplication

Matrix multiplication is valid only when:

- Number of columns in first matrix = number of rows in second matrix

Core formula:

```c
result[i][j] += a[i][k] * b[k][j];
```

---

## 8. Transpose

Transpose swaps rows and columns.

```c
transpose[j][i] = matrix[i][j];
```

---

## 9. Module Exercises

1. Read `n` numbers and print the sum and average.
2. Find maximum and minimum values in an array.
3. Reverse an array without using another array.
4. Search for a value using linear search.
5. Add two matrices.
6. Multiply two matrices.
7. Find the transpose of a matrix.

---

## 10. Quick Revision

- Arrays store same-type values together.
- Use loops to process arrays.
- Indexing mistakes are common, so trace carefully.
- Matrix problems depend on nested loops.

After this module, move to Module 7 (Strings).
