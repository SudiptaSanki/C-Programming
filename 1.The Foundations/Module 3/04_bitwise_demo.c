#include <stdio.h>

int main(void) {
    int a;
    int b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}
