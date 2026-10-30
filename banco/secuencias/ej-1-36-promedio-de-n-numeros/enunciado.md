Escribí un programa en C que calcule el **promedio aritmético** de una secuencia de $N$ números reales ingresados por teclado. Para eso, el programa debe:

1. Preguntar al usuario cuántos números va a ingresar (cantidad $N$ de la secuencia).
2. Leer los $N$ números **uno por uno**, recorriendo la secuencia con un ciclo contado.
3. Acumular la suma de todos los valores leídos.
4. Calcular y mostrar el promedio:

$$
\bar{x} = \frac{x_1 + x_2 + \cdots + x_N}{N}
$$

> **Nota:** el programa debe ser *flexible*: la longitud de la secuencia no se conoce de antemano; la define el usuario en tiempo de ejecución al ingresar $N$.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Promedio de N Números
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_romedio_de_n_numeros(int val);

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
- **Entrada Inicial:** Leer la cantidad de números a promediar ($N$).
- **Variables:** Se necesita un `acumulador` para la suma y un contador.
- **Proceso:**
- **Salida:** Mostrar el promedio calculado.
- Validar que la cantidad N de datos sea mayor a cero para evitar división por cero.
- Calcular en el mismo recorrido el valor máximo y mínimo del conjunto.
:::
