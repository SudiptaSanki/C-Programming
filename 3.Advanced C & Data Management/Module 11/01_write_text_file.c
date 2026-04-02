#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample_text.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fprintf(file, "Name: Rohan\nAge: 21\n");
    fclose(file);
    printf("Text file written successfully.\n");
    return 0;
}
