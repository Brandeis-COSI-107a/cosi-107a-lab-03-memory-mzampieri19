#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned int num = strtoul(argv[i], NULL, 10); // Convert to unsigned integer
        unsigned int low_8_bits = num & 0xFF; // Extract low-order 8 bits
        printf("%2d 0x%02X %3d\n", i, low_8_bits, low_8_bits); // Print argument number, hex, and decimal values
    }

    return 0;
}
