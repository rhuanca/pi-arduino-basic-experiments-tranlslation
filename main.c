#include <stdio.h>
#include "rpi.h"

extern struct bcm2835_peripheral gpio;  // They have to be found somewhere, but can't be in the header

int main() {

    if (map_peripheral(&gpio) == -1) {
        printf("Failed to map the physical GPIO registers into the virtual memory space.\n");
        return -1;
    }

    // Define pin 7 as output
    INP_GPIO(4);
    int count = 0;
    while (1) {
        printf("about to read gpio 4..\n");
        int in = GPIO_READ(4);
        printf("%i - in : %i\n", count++,in);
        sleep(1);
    }
    return 0;
}

