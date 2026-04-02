#include <stdio.h>

int main(void) {
    char text[100];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    printf("You entered: ");
    puts(text);
    return 0;
}
