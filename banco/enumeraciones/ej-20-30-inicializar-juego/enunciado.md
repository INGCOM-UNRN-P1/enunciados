# Inicializar juego

Implementar una función que inicialice un juego nuevo con la dificultad
especificada.



``` c
juego_t inicializar_juego(enum dificultad dif);
```

La dificultad debe afectar el número inicial de vidas y otros parámetros.

## Contrato

Implementá la API declarada en `ej-20-30-inicializar-juego.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
