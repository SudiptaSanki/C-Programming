#include <stdio.h>

// O(1) - Constant Time Example
void checkFirstElement(int arr[], int size) {
    printf("O(1) Example:\n");
    if (size > 0) {
        printf("First element is %d\n", arr[0]);
    }
}

// O(N) - Linear Time Example
void printAllElements(int arr[], int size) {
    printf("\O(N) Example:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// O(N^2) - Quadratic Time Example (Nested Loops)
void printAllPairs(int arr[], int size) {
    printf("\nO(N^2) Example:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("(%d, %d) ", arr[i], arr[j]);
        }
        printf("\n");
    }
}

int main(void) {
    int data[] = {10, 20, 30};
    int size = sizeof(data) / sizeof(data[0]);

    printf("--- Time Complexity Examples ---\n");
    
    checkFirstElement(data, size);  // Extremely Fast, doesn't depend on 'size'
    printAllElements(data, size);   // Speed depends directly on 'size'
    printAllPairs(data, size);      // Notice how quickly this output grows!

    return 0;
}
