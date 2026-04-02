#include <stdio.h>

int global_counter = 100;

void show_local_and_static(void) {
    int local_counter = 1;
    static int static_counter = 0;

    static_counter++;
    printf("Local = %d, Static = %d, Global = %d\n",
           local_counter, static_counter, global_counter);
}

int main(void) {
    show_local_and_static();
    show_local_and_static();
    show_local_and_static();
    return 0;
}
