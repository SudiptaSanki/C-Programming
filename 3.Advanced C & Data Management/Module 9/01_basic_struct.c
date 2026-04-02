#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float gpa;
};

int main(void) {
    struct Student student = {"Riya", 101, 8.7f};

    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll);
    printf("GPA: %.2f\n", student.gpa);
    return 0;
}
