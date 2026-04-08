#include <stdio.h>

// O(N) - Linear Search : Works on any array
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// O(log N) - Binary Search : ONLY works on SORTED arrays
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;     // Target found
        
        if (arr[mid] < target) left = mid + 1;  // Target must be in right half
        else right = mid - 1;                   // Target must be in left half
    }
    return -1;
}

int main(void) {
    // Array MUST be sorted for Binary Search
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    printf("--- Search Algorithms Comparison ---\n\n");
    
    // Test Linear Search
    int lin_result = linearSearch(arr, size, target);
    printf("Linear Search for %d returned index: %d\n", target, lin_result);

    // Test Binary Search
    int bin_result = binarySearch(arr, 0, size - 1, target);
    printf("Binary Search for %d returned index: %d\n", target, bin_result);

    return 0;
}
