Diseñá `trigonometria.h` y `trigonometria.c`:
- `double trigo_hipotenusa(double cateto1, double cateto2)`
- `double trigo_angulo_vector(double x, double y)`: ángulo respecto al eje X positivo en radianes.
- `bool trigo_resolver_triangulo_sss(double a, double b, double c, double *alpha, double *beta, double *gamma)`: calcula los 3 ángulos dada la longitud de los 3 lados.


---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Librería de Trigonometría Compleja
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_trigonometria_comp(int val);

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
- Usá el teorema del coseno para determinar los ángulos. Devuelve `false` si los lados no forman un triángulo válido.
:::
