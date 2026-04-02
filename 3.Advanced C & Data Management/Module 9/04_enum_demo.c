#include <stdio.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main(void) {
    enum Day today = WED;

    printf("Numeric value of WED = %d\n", today);
    return 0;
}
