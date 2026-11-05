#include "cripto-hash-02.h"

uint32_t crc32_ieee(const unsigned char *datos, size_t longitud)
{
    uint32_t crc = UINT32_C(0xffffffff);
    for (size_t i = 0; i < longitud; i++)
    {
        crc ^= datos[i];
        for (int bit = 0; bit < 8; bit++)
            crc = (crc >> 1) ^ ((crc & 1u) ? UINT32_C(0xedb88320) : 0u);
    }
    return crc ^ UINT32_C(0xffffffff);
}
