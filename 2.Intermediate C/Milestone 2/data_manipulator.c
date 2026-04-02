#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10
#define MAX_TEXT 500

void clear_input_buffer(void) {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}

int read_int(const char *prompt, int *value) {
    printf("%s", prompt);

    if (scanf("%d", value) != 1) {
        clear_input_buffer();
        return 0;
    }

    clear_input_buffer();
    return 1;
}

void trim_newline(char *text) {
    while (*text != '\0') {
        if (*text == '\n') {
            *text = '\0';
            return;
        }
        text++;
    }
}

void input_matrix(int rows, int cols, int matrix[][MAX_COLS]) {
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    clear_input_buffer();
}

void print_matrix(int rows, int cols, int matrix[][MAX_COLS]) {
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int rows, int cols,
                  int first[][MAX_COLS],
                  int second[][MAX_COLS],
                  int result[][MAX_COLS]) {
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void multiply_matrices(int r1, int c1,
                       int first[][MAX_COLS],
                       int r2, int c2,
                       int second[][MAX_COLS],
                       int result[][MAX_COLS]) {
    int i;
    int j;
    int k;

    (void) r2;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void transpose_matrix(int rows, int cols,
                      int matrix[][MAX_COLS],
                      int result[][MAX_COLS]) {
    int i;
    int j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int string_length(const char *text) {
    int length = 0;

    while (*text != '\0') {
        length++;
        text++;
    }

    return length;
}

int word_count(const char *text) {
    int count = 0;
    int in_word = 0;

    while (*text != '\0') {
        if (*text == ' ' || *text == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        text++;
    }

    return count;
}

char most_frequent_character(const char *text, int *frequency) {
    int counts[256] = {0};
    unsigned char current;
    int best_count = 0;
    unsigned char best_char = ' ';

    while (*text != '\0') {
        current = (unsigned char) *text;
        if (current != '\n' && current != '\r') {
            counts[current]++;
            if (counts[current] > best_count) {
                best_count = counts[current];
                best_char = current;
            }
        }
        text++;
    }

    *frequency = best_count;
    return (char) best_char;
}

void reverse_copy(const char *source, char *destination) {
    int length = string_length(source);
    int i;

    for (i = 0; i < length; i++) {
        destination[i] = source[length - 1 - i];
    }

    destination[length] = '\0';
}

void handle_text_analyzer(void) {
    char text[MAX_TEXT];
    char reversed[MAX_TEXT];
    int frequency;
    char frequent;

    printf("Enter a paragraph of text:\n");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Failed to read text.\n");
        return;
    }

    trim_newline(text);
    reverse_copy(text, reversed);
    frequent = most_frequent_character(text, &frequency);

    printf("\nCharacter count: %d\n", string_length(text));
    printf("Word count: %d\n", word_count(text));

    if (frequency > 0) {
        printf("Most frequent character: '%c' (%d times)\n", frequent, frequency);
    } else {
        printf("Most frequent character: none\n");
    }

    printf("Reversed text: %s\n", reversed);
}

void handle_matrix_engine(void) {
    int choice;
    int first[MAX_ROWS][MAX_COLS];
    int second[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];
    int rows1;
    int cols1;
    int rows2;
    int cols2;

    do {
        printf("\n===== Matrix Engine =====\n");
        printf("1. Add Matrices\n");
        printf("2. Multiply Matrices\n");
        printf("3. Transpose Matrix\n");
        printf("4. Back\n");

        if (!read_int("Enter your choice: ", &choice)) {
            printf("Invalid input.\n");
            continue;
        }

        switch (choice) {
            case 1:
                if (!read_int("Enter rows for first matrix: ", &rows1) ||
                    !read_int("Enter columns for first matrix: ", &cols1) ||
                    !read_int("Enter rows for second matrix: ", &rows2) ||
                    !read_int("Enter columns for second matrix: ", &cols2)) {
                    printf("Invalid dimensions.\n");
                    break;
                }

                if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0 ||
                    rows1 > MAX_ROWS || rows2 > MAX_ROWS ||
                    cols1 > MAX_COLS || cols2 > MAX_COLS) {
                    printf("Dimensions must be between 1 and %d x %d.\n", MAX_ROWS, MAX_COLS);
                    break;
                }

                if (rows1 != rows2 || cols1 != cols2) {
                    printf("Addition requires matrices of the same size.\n");
                    break;
                }

                printf("Enter first matrix:\n");
                input_matrix(rows1, cols1, first);
                printf("Enter second matrix:\n");
                input_matrix(rows2, cols2, second);

                add_matrices(rows1, cols1, first, second, result);
                printf("Result matrix:\n");
                print_matrix(rows1, cols1, result);
                break;

            case 2:
                if (!read_int("Enter rows for first matrix: ", &rows1) ||
                    !read_int("Enter columns for first matrix: ", &cols1) ||
                    !read_int("Enter rows for second matrix: ", &rows2) ||
                    !read_int("Enter columns for second matrix: ", &cols2)) {
                    printf("Invalid dimensions.\n");
                    break;
                }

                if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0 ||
                    rows1 > MAX_ROWS || rows2 > MAX_ROWS ||
                    cols1 > MAX_COLS || cols2 > MAX_COLS) {
                    printf("Dimensions must be between 1 and %d x %d.\n", MAX_ROWS, MAX_COLS);
                    break;
                }

                if (cols1 != rows2) {
                    printf("Multiplication requires first columns to equal second rows.\n");
                    break;
                }

                printf("Enter first matrix:\n");
                input_matrix(rows1, cols1, first);
                printf("Enter second matrix:\n");
                input_matrix(rows2, cols2, second);

                multiply_matrices(rows1, cols1, first, rows2, cols2, second, result);
                printf("Result matrix:\n");
                print_matrix(rows1, cols2, result);
                break;

            case 3:
                if (!read_int("Enter rows for matrix: ", &rows1) ||
                    !read_int("Enter columns for matrix: ", &cols1)) {
                    printf("Invalid dimensions.\n");
                    break;
                }

                if (rows1 <= 0 || cols1 <= 0 || rows1 > MAX_ROWS || cols1 > MAX_COLS) {
                    printf("Dimensions must be between 1 and %d x %d.\n", MAX_ROWS, MAX_COLS);
                    break;
                }

                printf("Enter matrix:\n");
                input_matrix(rows1, cols1, first);
                transpose_matrix(rows1, cols1, first, result);
                printf("Transpose matrix:\n");
                print_matrix(cols1, rows1, result);
                break;

            case 4:
                printf("Returning to main menu.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
}

void show_main_menu(void) {
    printf("\n===== Data Manipulator Toolkit =====\n");
    printf("1. Matrix Engine\n");
    printf("2. Text Analyzer\n");
    printf("3. Exit\n");
}

int main(void) {
    int choice;

    do {
        show_main_menu();

        if (!read_int("Enter your choice: ", &choice)) {
            printf("Please enter a valid menu option.\n");
            continue;
        }

        switch (choice) {
            case 1:
                handle_matrix_engine();
                break;
            case 2:
                handle_text_analyzer();
                break;
            case 3:
                printf("Exiting Data Manipulator Toolkit.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
