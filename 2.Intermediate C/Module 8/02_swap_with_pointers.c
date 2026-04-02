#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 7;
    int y = 14;

    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
