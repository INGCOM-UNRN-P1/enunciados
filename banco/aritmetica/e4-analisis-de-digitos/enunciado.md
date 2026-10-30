- **Módulo:** `ejercicios/ejercicio5/ejercicio5.h` /
  `ejercicios/ejercicio5/ejercicio5.c`
- **Operaciones a implementar:**
  1. `int contar_digitos(int numero);`: Retorna la cantidad de dígitos decimales
     de `numero` (el número 0 tiene 1 dígito).
  2. `int sumar_digitos(int numero);`: Retorna la suma de los valores absolutos
     de los dígitos de `numero`.
  3. `int invertir_numero(int numero);`: Invierte el orden de los dígitos
     conservando el signo (ejemplo: 1230 pasa a 321, -45 pasa a -54).
  4. `int es_capicua(int numero);`: Retorna `1` si el número se lee igual de
     izquierda a derecha que de derecha a izquierda, `0` en caso contrario.

### 📋 Contrato de las Funciones

```c
/*
 * Cuenta la cantidad de dígitos decimales de un número entero.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int contar_digitos(int numero);

/*
 * Suma los valores absolutos de los dígitos de un número entero.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int sumar_digitos(int numero);

/*
 * Invierte el orden de los dígitos conservando el signo.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int invertir_numero(int numero);

/*
 * Determina si un número entero es capicúa (se lee igual en ambos sentidos).
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int es_capicua(int numero);

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
