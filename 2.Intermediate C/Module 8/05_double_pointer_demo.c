#include <stdio.h>

int main(void) {
    int value = 50;
    int *ptr = &value;
    int **double_ptr = &ptr;

    printf("value = %d\n", value);
    printf("*ptr = %d\n", *ptr);
    printf("**double_ptr = %d\n", **double_ptr);
    return 0;
}
