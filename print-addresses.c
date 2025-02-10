#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        uint64_t num = strtoull(argv[i], NULL, 10); // Convert to unsigned 64-bit integer
        num &= 0xFFFFFFFFFFFF; // Mask to ensure only 48 bits
        printf("0x%012" PRIX64 "\n", num); // Print in uppercase, ensuring 12 hex digits
    }

    return 0;
}
