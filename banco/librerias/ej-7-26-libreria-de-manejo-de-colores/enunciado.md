Creá `color_utils.h` y `color_utils.c` para cálculos de color mediante operaciones aritméticas y fórmulas estándar:
- `double color_luminancia(unsigned char r, unsigned char g, unsigned char b)`: calcula la luminosidad relativa ($0.2126R + 0.7152G + 0.0722B$).
- `unsigned char color_escala_grises(unsigned char r, unsigned char g, unsigned char b)`: calcula el promedio de intensidad.
- `unsigned char color_mezclar_componente(unsigned char c1, unsigned char c2, double factor)`: realiza una interpolación lineal entre dos colores.


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Manejo de Colores RGB
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_manejo_de_colores(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validá que `factor` se encuentre en el rango $[0.0, 1.0]$.
- Implementar pruebas unitarias con `assert()` para colores básicos (blanco, negro, primarios).
:::
