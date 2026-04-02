#include <stdio.h>

void reverse_string(char text[]) {
    int start = 0;
    int end = 0;

    while (text[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        start++;
        end--;
    }
}

int is_palindrome(const char text[]) {
    int start = 0;
    int end = 0;

    while (text[end] != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        if (text[start] != text[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main(void) {
    char word1[] = "level";
    char word2[] = "coding";

    printf("%s palindrome? %s\n", word1, is_palindrome(word1) ? "Yes" : "No");
    printf("%s palindrome? %s\n", word2, is_palindrome(word2) ? "Yes" : "No");

    reverse_string(word2);
    printf("Reversed second word = %s\n", word2);
    return 0;
}
