Implementar el algoritmo de Fisher-Yates para barajar (desordenar
aleatoriamente) los elementos de un arreglo _in-place_.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO barajar_fisher_yates(REF arreglo, tamano)
VARIABLES:
    j, temporal (enteros)
INICIO
    PARA i DESDE tamano-1 HASTA 1 CON PASO -1 HACER
        j = generar_aleatorio(0, i)
        INTERCAMBIAR(arreglo[i], arreglo[j])
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Barajar arreglo (Fisher-Yates)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_arreglo_fisher_yates(int val);

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
- **Proceso:**
- Recorrer el arreglo desde el último elemento hasta el segundo (`i` desde `n-1` hasta 1).
- En cada iteración, generar un índice aleatorio `j` entre 0 e `i` (inclusive).
- Intercambiar el elemento en la posición `i` con el elemento en la posición `j`.
- **Aleatoriedad:** Requiere `srand()` y `rand()`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
