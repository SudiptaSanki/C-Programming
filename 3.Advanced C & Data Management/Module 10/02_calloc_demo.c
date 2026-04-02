#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = calloc(5, sizeof(int));
    int i;

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}
