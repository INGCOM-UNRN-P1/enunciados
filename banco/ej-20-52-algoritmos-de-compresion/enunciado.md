### Ejercicio 20.52 - Algoritmos de compresión ⭐⭐☆☆☆

Modelar diferentes algoritmos de compresión y sus niveles.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum algoritmo_compresion
{
    COMP_NINGUNO,
    COMP_DEFLATE,
    COMP_GZIP,
    COMP_BZIP2,
    COMP_LZMA,
    COMP_ZSTD,
    COMP_LZ4
};
enum nivel_compresion
{
    NIVEL_MINIMO = 1,
    NIVEL_RAPIDO = 3,
    NIVEL_NORMAL = 5,
    NIVEL_MAXIMO = 9
};
typedef struct
{
    enum algoritmo_compresion algoritmo;
    enum nivel_compresion nivel;
    size_t tamanio_original;
    size_t tamanio_comprimido;
    double ratio; // tamanio_comprimido / tamanio_original
} resultado_compresion_t;
```
<!-- {code-block} c -->
