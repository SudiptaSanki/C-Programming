#include <stdio.h>

int main(void) {
    int arr[10];
    int n, temp;

    printf("--- Array Sorter (Bubble Sort) ---\n");
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Classic Bubble Sort Algorithm O(N^2)
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element found is greater than the next element
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
