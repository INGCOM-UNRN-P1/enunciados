- **Módulo:** `ejercicios/ejercicio8/ejercicio8.h` /
  `ejercicios/ejercicio8/ejercicio8.c`
- **Operaciones a implementar:**
  1. `int suma_divisores_propios(int numero);`: Suma todos los divisores
     positivos de `numero` estrictamente menores al propio número. Si `numero`
     es menor o igual a 0, retorna `-1`.
  2. `int clasificar_numero(int numero);`: Retorna `1` si la suma de divisores
     propios es igual a `numero` (perfecto), `0` si la suma es menor a `numero`
     (deficiente), o `2` si la suma es mayor a `numero` (abundante). Si `numero`
     es menor o igual a 0, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Suma todos los divisores propios positivos de un número (menores al número).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int suma_divisores_propios(int numero);

/*
 * Clasifica un número según la suma de sus divisores propios:
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int clasificar_numero(int numero);

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
