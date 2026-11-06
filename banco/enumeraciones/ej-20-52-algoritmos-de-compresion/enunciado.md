# 52 Algoritmos De Compresion

Definí enums para algoritmos y niveles. Validá sus valores, incluyendo enteros fuera del conjunto declarado. Los niveles son los valores explícitos 1, 3, 5 y 9.

```c
enum algoritmo_compresion { COMP_NINGUNO, COMP_DEFLATE, COMP_GZIP, COMP_BZIP2, COMP_LZMA, COMP_ZSTD, COMP_LZ4, COMP_ALGORITMO_MAX };
enum nivel_compresion { NIVEL_MINIMO=1, NIVEL_RAPIDO=3, NIVEL_NORMAL=5, NIVEL_MAXIMO=9 };
typedef struct { enum algoritmo_compresion algoritmo; enum nivel_compresion nivel; size_t tamanio_original; size_t tamanio_comprimido; double ratio; } resultado_compresion_t;
bool algoritmo_compresion_valido(enum algoritmo_compresion algoritmo);
bool nivel_compresion_valido(enum nivel_compresion nivel);
```
