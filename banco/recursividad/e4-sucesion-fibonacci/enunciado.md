- **Módulo:** `ejercicios/ejercicio2/ejercicio2.h` /
  `ejercicios/ejercicio2/ejercicio2.c`
- **Operaciones a implementar:**
  1. `int fibonacci(int posicion);`: Calcula el término correspondiente a la
     posición dada en la sucesión de Fibonacci (donde las posiciones 0 y 1 valen
     0 y 1 respectivamente, y cada término siguiente es la suma de los dos
     anteriores). Si `posicion` es negativa, retorna `-1`.
  2. `int suma_fibonacci(int hasta_posicion);`: Calcula la suma acumulada de los
     términos de Fibonacci desde la posición 0 hasta `hasta_posicion`. Si
     `hasta_posicion` es negativa, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Calcula el n-ésimo término de la sucesión de Fibonacci (F0 = 0, F1 = 1).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int fibonacci(int n);

/*
 * Calcula la suma acumulada de los primeros n términos de Fibonacci (de F0 hasta Fn).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int suma_fibonacci(int n);

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
