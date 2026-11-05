#include "cripto-hash-03.h"

uint32_t fnv1a_32(const char *texto)
{
    uint32_t hash = UINT32_C(2166136261);
    const unsigned char *p = (const unsigned char *)texto;
    while (*p != 0)
    {
        hash ^= *p++;
        hash *= UINT32_C(16777619);
    }
    return hash;
}
