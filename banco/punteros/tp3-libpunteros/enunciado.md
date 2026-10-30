En el estándar C11, los arreglos y los punteros están íntimamente ligados por la
regla de decaimiento (_array-to-pointer decay_): el nombre de un arreglo evalúa
a la dirección en memoria de su primer elemento. No obstante, un puntero es una
variable independiente capaz de direccionamiento directo y cálculos aritméticos
en unidades escaladas por el tamaño del tipo apuntado (`sizeof(*p)`).

El propósito de este Trabajo Práctico es dominar el modelo de memoria de C,
pasando de la indexación estática al uso riguroso de:

- Paso por referencia para mutación de variables (`int *a`).
- Parámetros de salida para retornos múltiples
  (`bool fn(..., int *minimo, int *maximo)`).
- Aritmética de punteros pura (`p++`, `*p`, `fin - inicio`).
- _Const-correctness_ en punteros de solo lectura (`const int *`,
  `const char *`).
- Navegación y manipulación de cadenas seguras en memoria contigua.

Contiene primitivas fundamentales de manipulación por referencia y recorrido de
arreglos disponibles para todo el proyecto.


- **Firma provista**:
  ```c
  void intercambiar(int *primer, int *segundo);
  ```
- **Consigna**: Intercambia los contenidos de dos variables enteras recibidas
  por referencia a través de punteros.
- **Casos borde**: Si algún puntero es `NULL`, no produce ningún efecto. Si
  ambos punteros son iguales, el valor se preserva.


- **Firma provista**:
  ```c
  bool obtener_min_max(const int *arreglo, size_t cantidad, int *minimo, int *maximo);
  ```
- **Consigna**: Determina el mínimo y máximo de un arreglo de enteros
  recorriéndolo estrictamente con aritmética de punteros, escribiendo los
  resultados en `*minimo` y `*maximo`.
- **Casos borde**: Retorna `false` si `arreglo == NULL`, `cantidad == 0` o si
  alguno de los punteros de salida es `NULL`. Retorna `true` ante éxito.
- **Suite provista**: [`libs/punteros/prueba.c`](libs/punteros/prueba.c).

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de intercambiar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void intercambiar(int *primer, int *segundo);

/*
 * Operación principal de obtener_min_max
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool obtener_min_max(const int *arreglo, size_t cantidad, int *minimo, int *maximo);

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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
