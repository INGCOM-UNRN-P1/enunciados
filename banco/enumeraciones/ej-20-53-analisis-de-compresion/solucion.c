#include "ej-20-53-analisis-de-compresion.h"
double calcular_ratio(const resultado_compresion_t*r){return !r||!r->tamanio_original?0.0:(double)r->tamanio_comprimido/(double)r->tamanio_original;}
double porcentaje_ahorro(const resultado_compresion_t*r){return !r||!r->tamanio_original?0.0:100.0*(1.0-calcular_ratio(r));}
bool es_algoritmo_rapido(enum algoritmo_compresion a){return a==COMP_LZ4||a==COMP_ZSTD;}
const char*nombre_algoritmo(enum algoritmo_compresion a){static const char*ns[]={"ninguno","deflate","gzip","bzip2","lzma","zstd","lz4"};return (unsigned)a<COMP_ALGORITMO_MAX?ns[a]:"desconocido";}
