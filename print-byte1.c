#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <decimal numbers>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        unsigned int num = strtoul(argv[i], NULL, 0);  
        unsigned int byte1 = (num >> 8) & 0xFF;  
        printf("0x%02X %3d\n", byte1, byte1); 
    }

    return 0;
}



