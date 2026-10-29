:::{exercise}
:label: ej-ref-calendario-astronomico
Analizá el siguiente bloque de código. Es un algoritmo astronómico comprimido
que calcula el día de la semana (0=Domingo, 1=Lunes, ..., 6=Sábado) para
cualquier fecha del calendario gregoriano utilizando la **Congruencia de
Zeller** con meses ajustados (marzo=3, ..., diciembre=12, enero=13 del año
anterior, febrero=14 del año anterior):

``` c
int z(int d,int m,int y){if(m<3)m+=12,y--;int k=y%100,j=y/100;int h=(d+13*(m+1)/5+k+k/4+j/4+5*j)%7;return(h+6)%7;}
```

**Tu tarea:**
1. Desarmar la fórmula críptica identificando qué representan `k, j, h` y la
   constante `13*(m+1)/5`.
2. Validar que la fecha sea válida antes de evaluar la fórmula (usando
   `es_fecha_valida`).
3. Refactorizar el cálculo en funciones puras, legibles, documentadas con
   Doxygen, con constantes claras y estilo Allman.
4. Escribir una suite de pruebas con `assert()` para fechas históricas
   conocidas:
   - 25 de Mayo de 1810 $\rightarrow$ Viernes (5).
   - 9 de Julio de 1816 $\rightarrow$ Martes (2).
   - 1 de Enero de 2000 $\rightarrow$ Sábado (6).
   - 29 de Febrero de 2024 $\rightarrow$ Jueves (4).

-   **[*plus ultra*]:** Retornar un `enum` con los días de la semana
    `DIA_DOMINGO, DIA_LUNES, ...`.
-   **[*plus ultra*]:** Manejar fechas inválidas retornando `-1` o un código de
    error de estado.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Congruencia de Zeller Astronómica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_de_zeller_astronom(int val);

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
