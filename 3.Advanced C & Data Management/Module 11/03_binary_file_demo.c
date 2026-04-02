#include <stdio.h>

typedef struct {
    int id;
    float salary;
} Employee;

int main(void) {
    FILE *file = fopen("employee.dat", "wb");
    Employee employee = {101, 45000.0f};

    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fwrite(&employee, sizeof(Employee), 1, file);
    fclose(file);

    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Unable to reopen file.\n");
        return 1;
    }

    if (fread(&employee, sizeof(Employee), 1, file) == 1) {
        printf("ID: %d, Salary: %.2f\n", employee.id, employee.salary);
    }

    fclose(file);
    return 0;
}
