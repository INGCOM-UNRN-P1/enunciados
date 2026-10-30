Calcular el promedio de los elementos de un arreglo de enteros haciendo uso
de la biblioteca libarreglos. Si el arreglo es nulo o la cantidad es 0,
debe retornar 0.0.

Determinar si un número entero buscado pertenece al arreglo haciendo uso
de la función arreglo_buscar de libarreglos.

Usa la biblioteca del ejercicio `tp2-libarreglos`.

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de calcular_promedio
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
double calcular_promedio(const int arreglo[], size_t cantidad);

/*
 * Operación principal de contiene_valor
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
bool contiene_valor(const int arreglo[], size_t cantidad, int valor);

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
