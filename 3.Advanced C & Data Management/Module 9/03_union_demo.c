#include <stdio.h>
#include <string.h>

union Data {
    int integer_value;
    float float_value;
    char text[20];
};

int main(void) {
    union Data data;

    data.integer_value = 25;
    printf("Integer: %d\n", data.integer_value);

    data.float_value = 12.5f;
    printf("Float: %.2f\n", data.float_value);

    strcpy(data.text, "Union demo");
    printf("Text: %s\n", data.text);
    return 0;
}
