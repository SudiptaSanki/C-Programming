#include <stdio.h>

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int linear_search(int arr[], int size, int key) {
    int i;

    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    int arr[5] = {2, 4, 6, 8, 10};
    int i;
    int index;

    reverse_array(arr, 5);

    printf("Reversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    index = linear_search(arr, 5, 6);
    printf("Element 6 found at index %d\n", index);
    return 0;
}
