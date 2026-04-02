#include <stdio.h>

int main(void) {
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));
    printf("%d\n", *(ptr + 3));
    return 0;
}
