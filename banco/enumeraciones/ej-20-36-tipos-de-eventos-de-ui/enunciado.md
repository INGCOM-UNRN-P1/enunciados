# Tipos de eventos de UI

Implementá la siguiente interfaz declarada en `ej-20-36-tipos-de-eventos-de-ui.h`:

```c
enum tipo_evento { EVENTO_CLICK, EVENTO_DOBLE_CLICK, EVENTO_PRESIONAR_TECLA, EVENTO_SOLTAR_TECLA, EVENTO_MOVER_MOUSE, EVENTO_SCROLL };
enum boton_mouse { BOTON_IZQUIERDO=1, BOTON_DERECHO=2, BOTON_MEDIO=4 };
typedef struct { enum tipo_evento tipo; int x, y; unsigned int botones; unsigned int tecla; } evento_t;
bool evento_valido(const evento_t *evento);
bool boton_presionado(const evento_t *evento, enum boton_mouse boton);
```

Un evento es válido si no es NULL, su tipo está declarado y no activa bits de botones distintos de los tres definidos. Los eventos de teclado requieren `tecla` distinta de cero; los otros tipos no restringen tecla ni coordenadas. `boton_presionado` devuelve falso ante evento o botón inválido.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
