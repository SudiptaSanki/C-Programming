#include <stdio.h>

// Due to CPU memory alignment, compilers will often implicitly add "padding" 
// bytes between variables. Notice the sizes!

struct UnpackedStruct {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
};

// By using a pragma directive (gcc/clang), we can pack exactly
#pragma pack(push, 1)
struct PackedStruct {
    char a;      // 1 byte
    int b;       // 4 bytes
    char c;      // 1 byte
};
#pragma pack(pop)

int main(void) {
    printf("--- Struct Memory Padding Demo ---\n\n");
    
    printf("Size of 'char': %zu bytes\n", sizeof(char));
    printf("Size of 'int' : %zu bytes\n", sizeof(int));
    printf("Expected size of a char + int + char = 6 bytes.\n\n");

    printf("Actual size of UnpackedStruct: %zu bytes\n", sizeof(struct UnpackedStruct));
    printf("The compiler pads the chars with invisible bytes to align the int in memory!\n\n");

    printf("Actual size of PackedStruct (padding disabled): %zu bytes\n", sizeof(struct PackedStruct));
    
    return 0;
}
