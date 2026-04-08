#include <stdio.h>

// In C, main can accept CLI arguments
// argc: Argument Count (how many arguments were passed)
// argv: Argument Vector (array of strings holding the actual arguments)
int main(int argc, char *argv[]) {
    printf("--- Command Line Arguments ---\n\n");

    printf("Total Arguments passed (argc): %d\n\n", argc);
    
    // The very first argument (argv[0]) is ALWAYS the name of the program!
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    if (argc < 2) {
        printf("\nTry running this program from the terminal with extra words!\n");
        printf("Example: .\\06_command_line_args.exe hello world 123\n");
    }

    return 0;
}
