#include <stdio.h>

int main(void) {
    char inputChar;

    printf("--- ASCII Value Finder ---\n");
    printf("Enter any single character: ");
    
    // Space before %c handles any pending new lines from previous inputs
    scanf(" %c", &inputChar);

    // Characters in C are essentially stored as integers (their ASCII equivalent)
    // By passing a char to %d we print its underlying numerical value
    printf("\nThe ASCII value of '%c' is %d\n", inputChar, inputChar);

    // Demonstrate with some common characters
    printf("\nReference values:\n");
    printf("'A' is %d \t 'Z' is %d\n", 'A', 'Z');
    printf("'a' is %d \t 'z' is %d\n", 'a', 'z');
    printf("'0' is %d \t '9' is %d\n", '0', '9');

    return 0;
}
