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
 * Procesa el flujo principal del promedio de N números.
 * Precondiciones: `val` recibe la cantidad N de datos a promediar.
 * Postcondiciones: Si `val > 0`, lee la secuencia de `val` números, calcula el promedio,
 *       lo muestra por pantalla y devuelve un valor >= 0.
 *       Si `val <= 0`, no realiza ninguna división y devuelve 0.
 */
int proc_romedio_de_n_numeros(int val);
```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Secuencia típica
```text
¿Cuántos números vas a ingresar? 3
Número 1: 4
Número 2: 8
Número 3: 6
El promedio es: 6.00
```
:::
:::{tab-item} Secuencia con negativos y decimales
```text
¿Cuántos números vas a ingresar? 4
Número 1: 10.5
Número 2: 20
Número 3: -5
Número 4: 4.5
El promedio es: 7.50
```
:::
:::{tab-item} Cantidad inválida
```text
¿Cuántos números vas a ingresar? 0
Error: la cantidad de números debe ser mayor a cero.
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Secuencia vacía ($N = 0$):** El promedio no está definido. No debes dividir: mostrar mensaje de error y terminar sin calcular.
2. **Cantidad negativa ($N < 0$):** Una cantidad de datos nunca puede ser negativa; se trata igual que el caso anterior.
3. **Secuencia unitaria ($N = 1$):** El promedio es igual al único número ingresado. Es el recorrido mínimo del ciclo.
4. **Números negativos o decimales:** La secuencia puede contener valores negativos y/o decimales. Usar variables `double` para no perder precisión.
5. **Validez del formato:** Asumir que cada número se ingresa bien formado.

### 🎯 Criterios de Aceptación

- [ ] El programa lee primero $N$ y luego recorre la secuencia con un **ciclo contado** (`for`) de exactamente $N$ iteraciones.
- [ ] La suma se acumula en una variable `double` inicializada en `0` **antes** del ciclo.
- [ ] El promedio se calcula **después** del recorrido, dividiendo la suma por $N$.
- [ ] Si $N \le 0$, no se realiza ninguna división y se muestra un mensaje de error.
- [ ] La salida coincide con el formato de los ejemplos (dos decimales).

:::{hint} Consideraciones Didácticas
- Acumulador para la suma inicializado en `0` antes de iniciar el ciclo.
- Validar que la cantidad $N$ de datos sea mayor a cero para evitar división por cero.
- Calcular, en el mismo recorrido, el valor máximo y el mínimo del conjunto.
:::
