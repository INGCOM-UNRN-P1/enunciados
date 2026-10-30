- **Módulo:** `ejercicios/ejercicio4/ejercicio4.h` /
  `ejercicios/ejercicio4/ejercicio4.c`
- **Operaciones a implementar:**
  1. `int maximo_comun_divisor(int primer_numero, int segundo_numero);`: Calcula
     el máximo común divisor entre dos enteros mediante el algoritmo de
     Euclides. Si ambos valores son 0, retorna `-1`.
  2. `int minimo_comun_multiplo(int primer_numero, int segundo_numero);`:
     Calcula el mínimo común múltiplo entre dos enteros positivos a partir de su
     producto y su máximo común divisor. Si alguno es menor o igual a 0, retorna
     `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Calcula el Máximo Común Divisor entre dos números enteros mediante el algoritmo de Euclides.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int maximo_comun_divisor(int a, int b);

/*
 * Calcula el Mínimo Común Múltiplo entre dos números enteros.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int minimo_comun_multiplo(int a, int b);

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
