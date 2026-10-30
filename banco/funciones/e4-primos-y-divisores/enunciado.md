- **Módulo:** `ejercicios/ejercicio1/ejercicio1.h` /
  `ejercicios/ejercicio1/ejercicio1.c`
- **Operaciones a implementar:**
  1. `int es_primo(int numero);`: Determina si un número entero es primo.
     Retorna `1` si es primo, `0` en caso contrario (los números menores o
     iguales a 1 no son primos).
  2. `int proximo_primo(int numero_base);`: Retorna el menor número primo
     estrictamente mayor que `numero_base`.
  3. `int cantidad_divisores(int numero);`: Retorna la cantidad total de
     divisores positivos de `numero`. Si `numero` es menor o igual a 0, retorna
     `0`.

### 📋 Contrato de las Funciones

```c
/*
 * Determina si un número entero positivo es primo.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int es_primo(int numero);

/*
 * Encuentra el menor número primo estrictamente mayor que el número dado.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int proximo_primo(int numero);

/*
 * Cuenta la cantidad total de divisores positivos de un número.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int cantidad_divisores(int numero);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
