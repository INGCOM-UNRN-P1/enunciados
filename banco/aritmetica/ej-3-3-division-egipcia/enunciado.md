#### Descripción
Implementar el antiguo método de división egipcio, que no requiere tablas de
multiplicar ni operaciones de división directa. Se basa en duplicar el divisor,
encontrar qué duplicaciones suman el dividendo y sumar los factores de
duplicación correspondientes.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO division_egipcia(dividendo, divisor, REF cociente, REF resto)
VARIABLES:
    col1, col2 (arreglos)
    i (entero)
INICIO
    // 1. Crear tabla
    col1[0] = 1, col2[0] = divisor
    i = 0
    MIENTRAS col2[i] <= dividendo HACER
        i = i + 1
        col1[i] = col1[i-1] * 2
        col2[i] = col2[i-1] * 2
    FIN MIENTRAS

    // 2. Buscar y sumar
    cociente = 0
    PARA j DESDE i-1 HASTA 0 CON PASO -1 HACER
        SI col2[j] <= dividendo ENTONCES
            dividendo = dividendo - col2[j]
            cociente = cociente + col1[j]
        FIN SI
    FIN PARA
    resto = dividendo
FIN PROCEDIMIENTO

```

:::

---

## Divisibilidad y Factores

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de División egipcia
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_3_3_division_egipcia(int val);

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
- **Entrada:** Un dividendo y un divisor.
- **Proceso:**
- **Tabla de Duplicación:** Crear dos columnas. La primera empieza en 1 y la segunda en el `divisor`. En cada paso, duplicar el valor de la fila anterior en ambas columnas. Detenerse cuando el siguiente valor en la columna del divisor supere al `dividendo`.
- **Búsqueda y Suma:** Recorrer la tabla de abajo hacia arriba. Para cada fila, si el valor en la columna del divisor es menor o igual al `dividendo` restante, se resta ese valor del `dividendo` y se suma el valor correspondiente de la primera columna al `cociente`.
- **Salida:** El `cociente` acumulado y el `dividendo` final (que es el resto). filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Validar que el divisor sea distinto de cero e imprimir el paso a paso de las duplicaciones sucesivas.
- Comparar la cantidad de operaciones requeridas por la división egipcia frente a la división por restas.
:::
