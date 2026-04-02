#include <stdio.h>
#include <string.h>

int main(void) {
    char first[40] = "Hello";
    char second[] = " World";

    printf("Length of first = %zu\n", strlen(first));
    strcat(first, second);
    printf("After strcat = %s\n", first);
    printf("strcmp(\"abc\", \"abd\") = %d\n", strcmp("abc", "abd"));
    return 0;
}
