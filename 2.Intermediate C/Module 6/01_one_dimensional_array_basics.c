#include <stdio.h>

int main(void) {
    int marks[5] = {78, 84, 91, 67, 88};
    int i;

    for (i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
