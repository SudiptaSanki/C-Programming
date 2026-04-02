#include <stdio.h>

int main(void) {
    int total_marks;
    int subjects;
    float average;

    printf("Enter total marks: ");
    scanf("%d", &total_marks);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    if (subjects == 0) {
        printf("Average cannot be calculated because number of subjects is 0.\n");
        return 0;
    }

    average = (float) total_marks / subjects;

    printf("Average marks: %.2f\n", average);

    return 0;
}
