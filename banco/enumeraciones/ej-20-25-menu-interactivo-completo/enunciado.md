# Menú interactivo completo

Implementá un lazo que muestre el menú, lea una opción y ejecute su acción hasta que se seleccione `MENU_SALIR`. El menú debe mostrarse antes de cada lectura:

```text
1. Nuevo
2. Abrir
3. Guardar
4. Cerrar
5. Salir
Opcion:
```

Las opciones 1 a 4 escriben, respectivamente, `nuevo`, `abrir`, `guardar` o `cerrar`, cada una seguida de un salto de línea. Una entrada vacía, no numérica o fuera del rango 1–5 escribe `invalido` y el menú vuelve a mostrarse. La opción 5 escribe `salir` y termina el lazo. Cada línea se procesa como una entrada; el texto adicional que no sea espacio invalida esa línea.

## Contrato

`ejecutar_menu(entrada, salida)` usa los flujos provistos y retorna la cantidad de entradas procesadas que no fueron `MENU_SALIR`, incluyendo entradas inválidas. Si recibe un puntero nulo, retorna `-1`. Si el flujo de entrada termina antes de seleccionar Salir, retorna la cantidad procesada hasta entonces.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
