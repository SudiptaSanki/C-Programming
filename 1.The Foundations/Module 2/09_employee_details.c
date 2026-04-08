#include <stdio.h>

int main(void) {
    int empId;
    float salary;
    char perfGrade;

    printf("--- Employee Entry System ---\n");
    
    printf("Enter Employee ID (integer): ");
    scanf("%d", &empId);

    printf("Enter Salary (decimal): ");
    scanf("%f", &salary);

    printf("Enter Performance Grade (Single Character A/B/C): ");
    scanf(" %c", &perfGrade);

    // Formatted output aligning nicely using \t and %.2f
    printf("\n===================================\n");
    printf("       EMPLOYEE DATA CARD          \n");
    printf("===================================\n");
    printf("ID            : %d\n", empId);
    printf("Salary        : $ %.2f\n", salary);
    printf("Rating        : %c\n", perfGrade);
    printf("===================================\n");

    return 0;
}
