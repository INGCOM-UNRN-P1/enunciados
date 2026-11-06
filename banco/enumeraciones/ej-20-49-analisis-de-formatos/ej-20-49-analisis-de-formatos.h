#ifndef EJERCICIO_EJ_20_49_H
#define EJERCICIO_EJ_20_49_H
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

enum formato_imagen { FORMATO_JPEG, FORMATO_PNG, FORMATO_GIF, FORMATO_BMP, FORMATO_WEBP, FORMATO_TIFF, FORMATO_SVG };
enum modo_color { COLOR_ESCALA_GRISES, COLOR_RGB, COLOR_RGBA, COLOR_CMYK, COLOR_INDEXADO };
typedef struct { enum formato_imagen formato; enum modo_color modo; int ancho, alto, profundidad_bits; bool tiene_transparencia, es_animado; } metadata_imagen_t;

bool soporta_transparencia(enum formato_imagen formato);
bool soporta_animacion(enum formato_imagen formato);
bool es_formato_comprimido(enum formato_imagen formato);
const char *extension_formato(enum formato_imagen formato);

#endif
