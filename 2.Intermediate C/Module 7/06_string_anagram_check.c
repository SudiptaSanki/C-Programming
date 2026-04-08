#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams using a frequency array
int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // frequency array for all ASCII characters
    int i;

    // Both strings must be the same length to be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Increment count for str1, decrement for str2
    for (i = 0; str1[i] != '\0'; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    // If they are anagrams, all counts should return to 0
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char word1[100], word2[100];

    printf("--- Anagram Checker ---\n");
    printf("Enter first word: ");
    scanf("%s", word1);
    
    printf("Enter second word: ");
    scanf("%s", word2);

    if (areAnagrams(word1, word2)) {
        printf("\nWow! '%s' and '%s' are Anagrams.\n", word1, word2);
    } else {
        printf("\nNope, '%s' and '%s' are not Anagrams.\n", word1, word2);
    }

    return 0;
}
