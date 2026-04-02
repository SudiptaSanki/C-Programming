#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 4;
    int i;
    int sum = 0;
    int *numbers = malloc(count * sizeof(int));

    if (numbers == NULL) {
        printf("Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        numbers[i] = (i + 1) * 5;
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);
    free(numbers);
    return 0;
}
