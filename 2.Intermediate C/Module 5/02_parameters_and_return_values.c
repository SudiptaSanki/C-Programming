#include <stdio.h>

float calculate_average(int total, int subjects) {
    return (float) total / subjects;
}

int main(void) {
    int total_marks = 425;
    int subject_count = 5;

    printf("Average = %.2f\n", calculate_average(total_marks, subject_count));
    return 0;
}
