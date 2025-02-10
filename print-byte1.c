#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned int num = strtoul(argv[i], NULL, 10); // Convert to unsigned integer
        unsigned int byte1 = (num >> 8) & 0xFF; // Extract byte 1
        printf("%2d 0x%02X %3d\n", i, byte1, byte1); // Print argument number, hex, and decimal values
    }

    return 0;
}
