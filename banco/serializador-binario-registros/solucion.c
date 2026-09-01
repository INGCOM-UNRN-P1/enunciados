/*
 * Serializador Binario con Magic Number y Checksum
 * Catedra Programacion I - UNRN
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAGIC_HEADER 0x42494E31
#define FORMAT_VERSION 1

typedef struct
{
    uint32_t magic;
    uint32_t version;
    uint32_t count;
    uint32_t checksum;
} HeaderBinario;

typedef struct
{
    uint32_t id;
    float precio;
    uint32_t stock;
} Producto;

uint32_t calcular_checksum(const uint8_t *data, size_t len)
{
    uint32_t xor_sum = 0;
    for (size_t i = 0; i < len; i++)
    {
        xor_sum ^= ((uint32_t)data[i] << ((i % 4) * 8));
    }
    return xor_sum;
}

int main(void)
{
    Producto *productos = NULL;
    uint32_t count = 0;

    uint8_t *buffer_serializado = NULL;
    size_t tamano_serializado = 0;

    char comando[32] = {0};

    while (scanf("%31s", comando) == 1)
    {
        if (strcmp(comando, "CREATE") == 0)
        {
            if (scanf("%u", &count) == 1 && count > 0)
            {
                free(productos);
                Producto *nuevos_prod = (Producto *)malloc(sizeof(Producto) * count);
                if (nuevos_prod == NULL)
                {
                    productos = NULL;
                    count = 0;
                    continue;
                }
                productos = nuevos_prod;
                for (uint32_t i = 0; i < count; i++)
                {
                    if (scanf("%u %f %u", &productos[i].id, &productos[i].precio, &productos[i].stock) != 3)
                    {
                        break;
                    }
                }
            }
        }
        else if (strcmp(comando, "SAVE") == 0)
        {
            if (productos != NULL && count > 0)
            {
                size_t payload_size = sizeof(Producto) * count;
                tamano_serializado = sizeof(HeaderBinario) + payload_size;
                free(buffer_serializado);
                uint8_t *buf = (uint8_t *)malloc(tamano_serializado);
                if (buf == NULL)
                {
                    buffer_serializado = NULL;
                    tamano_serializado = 0;
                    continue;
                }
                buffer_serializado = buf;

                HeaderBinario hdr;
                hdr.magic = MAGIC_HEADER;
                hdr.version = FORMAT_VERSION;
                hdr.count = count;
                hdr.checksum = calcular_checksum((const uint8_t *)productos, payload_size);

                memcpy(buffer_serializado, &hdr, sizeof(HeaderBinario));
                memcpy(buffer_serializado + sizeof(HeaderBinario), productos, payload_size);

                printf("SAVED bytes=%zu checksum=0x%08X\n", tamano_serializado, hdr.checksum);
            }
        }
        else if (strcmp(comando, "LOAD") == 0)
        {
            if (buffer_serializado != NULL && tamano_serializado >= sizeof(HeaderBinario))
            {
                HeaderBinario hdr;
                memcpy(&hdr, buffer_serializado, sizeof(HeaderBinario));

                if (hdr.magic != MAGIC_HEADER || hdr.version != FORMAT_VERSION)
                {
                    printf("ERROR_MAGIC_O_VERSION\n");
                }
                else
                {
                    size_t payload_size = sizeof(Producto) * hdr.count;
                    if (tamano_serializado != sizeof(HeaderBinario) + payload_size)
                    {
                        printf("ERROR_TAMANO\n");
                    }
                    else
                    {
                        const uint8_t *payload_ptr = buffer_serializado + sizeof(HeaderBinario);
                        uint32_t check = calcular_checksum(payload_ptr, payload_size);
                        if (check != hdr.checksum)
                        {
                            printf("ERROR_INTEGRIDAD\n");
                        }
                        else
                        {
                            free(productos);
                            Producto *prod_cargados = (Producto *)malloc(payload_size);
                            if (prod_cargados == NULL)
                            {
                                productos = NULL;
                                count = 0;
                                continue;
                            }
                            productos = prod_cargados;
                            count = hdr.count;
                            memcpy(productos, payload_ptr, payload_size);
                            printf("LOAD_OK count=%u\n", count);
                        }
                    }
                }
            }
        }
        else if (strcmp(comando, "CORRUPT") == 0)
        {
            size_t pos = 0;
            if (scanf("%zu", &pos) == 1 && pos < tamano_serializado && buffer_serializado != NULL)
            {
                buffer_serializado[pos] ^= 0xFF;
                printf("CORRUPTED pos=%zu\n", pos);
            }
        }
        else if (strcmp(comando, "SHOW") == 0)
        {
            if (productos != NULL)
            {
                for (uint32_t i = 0; i < count; i++)
                {
                    printf("PROD %u: $%.2f (stock=%u)\n", productos[i].id, productos[i].precio, productos[i].stock);
                }
            }
        }
        else if (strcmp(comando, "EXIT") == 0)
        {
            break;
        }
    }

    free(productos);
    free(buffer_serializado);
    return 0;
}