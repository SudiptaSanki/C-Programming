#include <stdio.h>

#define PI 3.14159
#define AREA_OF_CIRCLE(r) (PI * (r) * (r))

int main(void) {
    float radius = 3.0f;

    printf("Area = %.2f\n", AREA_OF_CIRCLE(radius));
    return 0;
}
