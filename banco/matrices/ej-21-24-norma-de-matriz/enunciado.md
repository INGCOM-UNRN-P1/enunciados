Implementar funciones que calculen diferentes normas de una matriz.



``` c
double norma_frobenius(double **matriz, int filas, int cols);
double norma_maxima(double **matriz, int filas, int cols);
double norma_uno(double **matriz, int filas, int cols);
```

**Norma de Frobenius:** $||A||_F = \sqrt{\sum_{i,j} a_{ij}^2}$

**Norma máxima:** $||A||_{\infty} = \max_i \sum_j |a_{ij}|$ (máxima suma de
fila)

**Norma uno:** $||A||_1 = \max_j \sum_i |a_{ij}|$ (máxima suma de columna)

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Norma de matriz
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_1_24_norma_de_matriz(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Entrada con valor 5
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada con valor 0
```text
Entrada: 0
Salida / Retorno: 0
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

:::{hint} Consideraciones Didácticas
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
