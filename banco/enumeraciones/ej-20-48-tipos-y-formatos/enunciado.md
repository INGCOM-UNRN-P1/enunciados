# Tipos y formatos

Implementá la siguiente interfaz declarada en `ej-20-48-tipos-y-formatos.h`:

```c
enum formato_imagen { FORMATO_JPEG, FORMATO_PNG, FORMATO_GIF, FORMATO_BMP, FORMATO_WEBP, FORMATO_TIFF, FORMATO_SVG };
enum modo_color { COLOR_ESCALA_GRISES, COLOR_RGB, COLOR_RGBA, COLOR_CMYK, COLOR_INDEXADO };
typedef struct { enum formato_imagen formato; enum modo_color modo; int ancho, alto, profundidad_bits; bool tiene_transparencia, es_animado; } metadata_imagen_t;
bool metadata_imagen_valida(const metadata_imagen_t *metadata);
```

Los valores de formato y modo deben pertenecer a sus enums; ancho, alto y profundidad deben ser positivos. SVG requiere profundidad cero; los formatos rasterizados requieren profundidad positiva. Transparencia sólo se admite en PNG, GIF, WEBP, TIFF o SVG; animación sólo en GIF o WEBP. Los campos booleanos deben ser `true` o `false` (en C, cualquier valor distinto de cero se interpreta como verdadero).

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
