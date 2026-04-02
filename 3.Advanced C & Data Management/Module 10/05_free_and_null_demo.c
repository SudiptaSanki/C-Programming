#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL) {
        return 1;
    }

    *ptr = 99;
    printf("Before free: %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer safely reset to NULL.\n");
    }

    return 0;
}
