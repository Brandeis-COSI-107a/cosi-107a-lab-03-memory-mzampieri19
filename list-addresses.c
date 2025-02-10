#include <stdio.h>
#include <stdlib.h>

int uninitialized_var;

void sample_function() {}

int main() {
    int stack_var;

    const char *init_data = "Hello, World!";

    printf("stack variable:        0x%012lX\n", (unsigned long)&stack_var);
    printf("initialized data:      0x%012lX\n", (unsigned long)init_data);
    printf("uninitialized data:    0x%012lX\n", (unsigned long)&uninitialized_var);
    printf("main:                  0x%012lX\n", (unsigned long)&main);
    printf("function:              0x%012lX\n", (unsigned long)&sample_function);

    return 0;
}
