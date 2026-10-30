- **Módulo:** `ejercicios/ejercicio7/ejercicio7.h` /
  `ejercicios/ejercicio7/ejercicio7.c`
- **Operaciones a implementar:**
  1. `long long decimal_a_binario(int numero_decimal);`: Convierte un entero
     decimal no negativo a su representación binaria expresada como número
     entero (ejemplo: 13 pasa a 1101). Si `numero_decimal` es negativo, retorna
     `-1`.
  2. `int binario_a_decimal(long long numero_binario);`: Convierte un número
     compuesto solo por dígitos 0 y 1 a su equivalente en base decimal (ejemplo:
     1101 pasa a 13). Si contiene dígitos inválidos o es negativo, retorna `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Convierte un número decimal no negativo a su representación en binario como valor entero.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long decimal_a_binario(int numero);

/*
 * Convierte un valor entero que representa dígitos binarios (0 y 1) a su valor decimal.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int binario_a_decimal(long long binario);

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
