#include <stdio.h>

int main(void) {
    int arr[5] = {5, 10, 15, 20, 25};
    int i;

    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arr + %d) = %d\n",
               i, arr[i], i, *(arr + i));
    }

    return 0;
}
