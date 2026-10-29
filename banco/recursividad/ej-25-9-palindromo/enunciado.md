Implementá una función recursiva en C que determine si una cadena de caracteres es un palíndromo (se lee igual de izquierda a derecha que de derecha a izquierda).

**Lógica recursiva:**
1. **Caso Base:** Una cadena vacía o de un solo carácter es un palíndromo.
2. **Paso Recursivo:** La cadena es un palíndromo si su primer y último carácter coinciden, y la subcadena interior comprendida entre ellos también es un palíndromo.

### 📋 Contrato de las Funciones

```c
/*
 * Determina recursivamente si una subcadena es palíndromo.
 * Precondiciones: 'str' debe ser un puntero válido no nulo a una cadena terminada en '\0'.
 *                 'inicio' y 'fin' son índices válidos dentro del rango de la cadena.
 * Postcondiciones: Retorna 1 si es palíndromo, o 0 si no lo es.
 */
int es_palindromo(const char *str, int inicio, int fin);
```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso Palíndromo
```text
Entrada: "neuquen"
Salida / Retorno: 1
```
:::
:::{tab-item} Caso No Palíndromo
```text
Entrada: "algoritmo"
Salida / Retorno: 0
```
:::
:::{tab-item} Caso Base Unitario
```text
Entrada: "a"
Salida / Retorno: 1
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Punteros nulos:** Validar que el puntero `str` recibido no sea `NULL`.
2. **Cadena vacía o cruce de índices:** Si `inicio >= fin`, se alcanzó el caso base con éxito (retorna 1).
3. **Terminación nula:** Asegurar que la cadena esté debidamente terminada en `\0`.
4. **Valores fuera de rango:** Verificar que los índices `inicio` y `fin` no sean negativos ni excedan la longitud de la cadena.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] La solución utiliza recursividad explícita sin utilizar lazos iterativos (`for`, `while`, `do-while`).
- [ ] Valida punteros nulos y gestiona adecuadamente cadenas vacías y de longitud par o impar.
- [ ] Satisface las pruebas unitarias provistas.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y verificar los límites de los índices antes de indexar.
- Pensar el caso base cuando los índices se cruzan (`inicio >= fin`).
:::
