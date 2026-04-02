#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int *arr = malloc(3 * sizeof(int));
    int *temp;

    if (arr == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        arr[i] = (i + 1) * 10;
    }

    temp = realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        free(arr);
        printf("Reallocation failed.\n");
        return 1;
    }

    arr = temp;
    arr[3] = 40;
    arr[4] = 50;

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}
