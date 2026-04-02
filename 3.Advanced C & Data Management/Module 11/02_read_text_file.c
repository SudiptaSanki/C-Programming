#include <stdio.h>

int main(void) {
    FILE *file = fopen("sample_text.txt", "r");
    char line[100];

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
