#include "ej-20-49-analisis-de-formatos.h"
bool soporta_transparencia(enum formato_imagen f){return f==FORMATO_PNG||f==FORMATO_GIF||f==FORMATO_WEBP||f==FORMATO_TIFF||f==FORMATO_SVG;}
bool soporta_animacion(enum formato_imagen f){return f==FORMATO_GIF||f==FORMATO_WEBP;}
bool es_formato_comprimido(enum formato_imagen f){return f==FORMATO_JPEG||f==FORMATO_PNG||f==FORMATO_GIF||f==FORMATO_WEBP;}
const char *extension_formato(enum formato_imagen f){static const char *e[]={"jpg","png","gif","bmp","webp","tiff","svg"};return f>=FORMATO_JPEG&&f<=FORMATO_SVG?e[f]:"desconocido";}
