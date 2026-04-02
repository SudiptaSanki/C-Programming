#include <stdio.h>

int main(void) {
    int age;
    int has_id;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Do you have an ID card? Enter 1 for yes, 0 for no: ");
    scanf("%d", &has_id);

    printf("age >= 18: %d\n", age >= 18);
    printf("age == 18: %d\n", age == 18);
    printf("age != 18: %d\n", age != 18);
    printf("Eligible for entry: %d\n", age >= 18 && has_id == 1);
    printf("Needs guardian: %d\n", age < 18 || has_id == 0);
    printf("Not a minor: %d\n", !(age < 18));

    return 0;
}
