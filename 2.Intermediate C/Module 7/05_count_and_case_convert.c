#include <stdio.h>

int main(void) {
    char text[] = "Hello World 123";
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;

    while (text[i] != '\0') {
        char ch = text[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if (ch == ' ') {
            spaces++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        if (ch >= 'a' && ch <= 'z') {
            text[i] = (char) (ch - ('a' - 'A'));
        } else if (ch >= 'A' && ch <= 'Z') {
            text[i] = (char) (ch + ('a' - 'A'));
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Spaces = %d\n", spaces);
    printf("Converted text = %s\n", text);
    return 0;
}
