- **Módulo:** `ejercicios/ejercicio3/ejercicio3.h` /
  `ejercicios/ejercicio3/ejercicio3.c`
- **Operaciones a implementar:**
  1. `long long factorial(int numero);`: Calcula el factorial de un número
     entero no negativo. Para 0, el factorial es 1. Si `numero` es negativo,
     retorna `-1`.
  2. `long long combinatorio(int cantidad_elementos, int elementos_por_grupo);`:
     Calcula la cantidad de combinaciones posibles de `cantidad_elementos`
     agrupados de a `elementos_por_grupo`. Si `elementos_por_grupo` es negativo,
     mayor a `cantidad_elementos`, o si `cantidad_elementos` es negativo,
     retorna `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Calcula el factorial de un número entero no negativo (n!).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long factorial(int n);

/*
 * Calcula el número combinatorio C(n, k) = n! / (k! * (n - k)!).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long combinatorio(int n, int k);

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
