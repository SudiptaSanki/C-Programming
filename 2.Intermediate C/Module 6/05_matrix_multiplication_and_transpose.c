#include <stdio.h>

int main(void) {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{2, 0}, {1, 2}};
    int product[2][2] = {{0, 0}, {0, 0}};
    int transpose[2][2];
    int i;
    int j;
    int k;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Product matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of first matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
