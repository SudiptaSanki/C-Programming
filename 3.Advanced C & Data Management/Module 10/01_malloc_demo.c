#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *value = malloc(sizeof(int));

    if (value == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *value = 42;
    printf("Stored value = %d\n", *value);

    free(value);
    return 0;
}
