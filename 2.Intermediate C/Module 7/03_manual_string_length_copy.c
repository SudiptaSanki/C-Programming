#include <stdio.h>

int string_length(const char source[]) {
    int i = 0;

    while (source[i] != '\0') {
        i++;
    }

    return i;
}

void string_copy(char destination[], const char source[]) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main(void) {
    char source[] = "Manual copy";
    char destination[30];

    string_copy(destination, source);
    printf("Copied string = %s\n", destination);
    printf("Length = %d\n", string_length(destination));
    return 0;
}
