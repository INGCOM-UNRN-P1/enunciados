# Gestión de estado

Implementar funciones para transiciones de estado comunes.



``` c
void pausar_juego(juego_t *juego);
void reanudar_juego(juego_t *juego);
void perder_vida(juego_t *juego);
void ganar_nivel(juego_t *juego);
```

## Contrato

Implementá la API declarada en `ej-20-31-gestion-de-estado.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
