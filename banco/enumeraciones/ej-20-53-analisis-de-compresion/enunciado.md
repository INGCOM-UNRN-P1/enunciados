# 53 Analisis De Compresion

Calculá ratio comprimido/original y porcentaje de ahorro. Para tamaño original cero devolvé 0. Considerá LZ4 y Zstandard algoritmos rápidos; valores desconocidos tienen nombre `desconocido`.

```c
enum algoritmo_compresion { COMP_NINGUNO, COMP_DEFLATE, COMP_GZIP, COMP_BZIP2, COMP_LZMA, COMP_ZSTD, COMP_LZ4, COMP_ALGORITMO_MAX };
enum nivel_compresion { NIVEL_MINIMO=1, NIVEL_RAPIDO=3, NIVEL_NORMAL=5, NIVEL_MAXIMO=9 };
typedef struct { enum algoritmo_compresion algoritmo; enum nivel_compresion nivel; size_t tamanio_original; size_t tamanio_comprimido; double ratio; } resultado_compresion_t;
double calcular_ratio(const resultado_compresion_t *resultado);
double porcentaje_ahorro(const resultado_compresion_t *resultado);
bool es_algoritmo_rapido(enum algoritmo_compresion algoritmo);
const char *nombre_algoritmo(enum algoritmo_compresion algoritmo);
```
