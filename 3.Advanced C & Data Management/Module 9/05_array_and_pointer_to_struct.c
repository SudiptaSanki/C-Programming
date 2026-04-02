#include <stdio.h>

typedef struct {
    char name[30];
    int age;
} Person;

int main(void) {
    Person people[2] = {{"Aman", 22}, {"Sneha", 21}};
    Person *ptr = &people[0];
    int i;

    for (i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d\n", ptr->name, ptr->age);
        ptr++;
    }

    return 0;
}
