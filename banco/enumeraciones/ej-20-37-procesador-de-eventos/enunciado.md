# Procesador de eventos

Implementá la siguiente interfaz declarada en `ej-20-37-procesador-de-eventos.h`:

```c
enum tipo_evento { EVENTO_CLICK, EVENTO_DOBLE_CLICK, EVENTO_PRESIONAR_TECLA, EVENTO_SOLTAR_TECLA, EVENTO_MOVER_MOUSE, EVENTO_SCROLL };
enum boton_mouse { BOTON_IZQUIERDO=1, BOTON_DERECHO=2, BOTON_MEDIO=4 };
typedef struct { enum tipo_evento tipo; int x, y; unsigned int botones; unsigned int tecla; } evento_t;

typedef void (*manejador_evento_t)(const evento_t *evento, void *contexto);
typedef struct { manejador_evento_t manejador; void *contexto; unsigned int procesados; unsigned int ignorados; } procesador_eventos_t;
void inicializar_procesador_eventos(procesador_eventos_t *procesador, manejador_evento_t manejador, void *contexto);
bool procesar_evento(procesador_eventos_t *procesador, const evento_t *evento);
```

El encabezado define también `enum tipo_evento`, `enum boton_mouse` y `evento_t` de forma autocontenida. Inicializar pone contadores en cero y conserva manejador/contexto. Procesar un evento válido invoca una vez el callback si existe, aumenta `procesados` y devuelve true. Un procesador NULL devuelve false; evento inválido o procesador sin callback aumenta `ignorados` (cuando se puede) y devuelve false.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
