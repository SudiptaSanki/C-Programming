#include <stdio.h>

int main(void) {
    int arr[6] = {42, 17, 89, 23, 65, 10};
    int i;
    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
