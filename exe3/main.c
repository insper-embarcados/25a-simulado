#include "pico/stdlib.h"
#include <stdio.h>

#include "hardware/gpio.h"

int main() {
    stdio_init_all();

    while (1) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
