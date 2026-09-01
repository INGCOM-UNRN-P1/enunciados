/*
 * Socket Protocol #20
 * Catedra Programacion I - UNRN
 */
#include <stdint.h>
#include <stdio.h>


int ejecutar_net_sock_20(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void) {
    uint32_t ip = 0;
    if (scanf("%u", &ip) == 1) {
        printf("SOCK_%02d_PACKET: IP=0x%08X PORT=%d\n", 20, ip, 8000 + 20);
    }
    return 0;
}