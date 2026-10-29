### Ejercicio 20.33 - Estadísticas por protocolo ⭐⭐⭐☆☆

Implementar una función que cuente paquetes por protocolo en un arreglo de
paquetes.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
typedef struct
{
    unsigned int tcp;
    unsigned int udp;
    unsigned int icmp;
    unsigned int otro;
} estadisticas_protocolo_t;
estadisticas_protocolo_t contar_por_protocolo(const paquete_red_t *paquetes,
                                              size_t cantidad);
```
<!-- {code-block} c -->

## Enums en Sistemas de Archivos
