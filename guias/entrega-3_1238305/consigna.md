# Entrega 3 — Modularización y Funciones en C

Completá los siguientes enunciados, creando un archivo fuente `.c` por cada uno.

Los nombres de los archivos deben estar en minúsculas y usar guiones bajos `_`, sin espacios ni caracteres especiales fuera de `[a-z0-9_]`. Por ejemplo: `5_1_vilugron.c` o `ej5_1_vilugron.c`.

Usá esta estructura como plantilla para tus entregas:

```c
/*
Ejercicio 5.1 – Doble de un número
-----------------
Nombre y Apellido: Alan Turing
Usuario GitHub: aturing
*/

#include <stdio.h>
#include <assert.h>

/**
 * @brief Calcula el doble de un número entero.
 * @param n Número entero de entrada.
 * @return El doble del valor recibido.
 */
int doble(int n)
{
    return 2 * n;
}

int main(void)
{
    // Pruebas unitarias de las funciones implementadas
    assert(doble(5) == 10);
    assert(doble(0) == 0);
    assert(doble(-3) == -6);

    printf("Todos los tests pasaron correctamente.\n");
    return 0;
}
```

Para más detalles, podés consultar la ayuda en el apunte que está enlazado en cada consigna.

## Cuestiones de Estilo Aplicables

Aplican las reglas de estilo de las entregas anteriores y, en particular, es indispensable tener en cuenta:

- **Regla 0x2009h:** Los ejercicios deben ser resueltos mediante funciones con responsabilidades acotadas.
- **Regla 0x2003h:** Todas las funciones deben incluir documentación completa y estructurada en formato Doxygen (`@brief`, `@param`, `@return`).
- **Regla 0x2002h:** Las funciones auxiliares no deben contener `printf` ni `scanf`; su interfaz debe ser pura (recibir parámetros y retornar resultados). Dejá las entradas y salidas para `main()` o funciones explícitas de interfaz.

Para ser considerada 'completa', la entrega debe contener como mínimo **tres ejercicios resueltos**, en donde uno debe ser de **tres estrellas como mínimo** (⭐⭐⭐☆☆ o superior). Podés implementar tantos ejercicios del listado como quieras:

- **Ejercicio 5.1** - Doble de un número ⭐⭐☆☆☆
- **Ejercicio 5.2** - Mayor de dos números ⭐⭐☆☆☆
- **Ejercicio 3.1** - Suma lenta ⭐⭐☆☆☆
- **Ejercicio 3.2** - División lenta ⭐⭐☆☆☆
- **Ejercicio 5.8** - Factorial Recursivo e Iterativo ⭐⭐☆☆☆
- **Ejercicio 5.10** - Validación de Entrada ⭐⭐⭐☆☆
- **Ejercicio 5.12** - Números de Fibonacci ⭐⭐⭐☆☆
- **Ejercicio 5.17** - Combinatoria ⭐⭐⭐⭐☆
