# Análisis de formatos

Implementá la siguiente interfaz declarada en `ej-20-49-analisis-de-formatos.h`:

```c
enum formato_imagen { FORMATO_JPEG, FORMATO_PNG, FORMATO_GIF, FORMATO_BMP, FORMATO_WEBP, FORMATO_TIFF, FORMATO_SVG };
enum modo_color { COLOR_ESCALA_GRISES, COLOR_RGB, COLOR_RGBA, COLOR_CMYK, COLOR_INDEXADO };
typedef struct { enum formato_imagen formato; enum modo_color modo; int ancho, alto, profundidad_bits; bool tiene_transparencia, es_animado; } metadata_imagen_t;

bool soporta_transparencia(enum formato_imagen formato);
bool soporta_animacion(enum formato_imagen formato);
bool es_formato_comprimido(enum formato_imagen formato);
const char *extension_formato(enum formato_imagen formato);
```

El encabezado define el enum autocontenido. Transparencia: PNG, GIF, WEBP, TIFF y SVG. Animación: GIF y WEBP. Compresión: JPEG, PNG, GIF y WEBP. Extensiones (sin punto): `jpg`, `png`, `gif`, `bmp`, `webp`, `tiff`, `svg`. Formato inválido: las tres propiedades devuelven false y la extensión `desconocido`.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
