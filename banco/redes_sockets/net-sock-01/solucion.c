/*
 * Conversion Endianness Red
 * Catedra Programacion I - UNRN
 */
#include <stdint.h>
#include <stdio.h>

uint16_t simular_htons(uint16_t val) {
    return (uint16_t)((val << 8) | (val >> 8));
}

int main(void) {
    uint16_t port = 0;
    if (scanf("%hu", &port) == 1) {
        uint16_t net_port = simular_htons(port);
        printf("HOST: 0x%04X | RED: 0x%04X\n", port, net_port);
    }
    return 0;
}