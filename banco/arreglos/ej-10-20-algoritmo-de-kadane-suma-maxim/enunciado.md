Implementar el algoritmo de Kadane para encontrar la suma del subarreglo
contiguo que tenga la suma más grande. El arreglo puede contener números
negativos.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION kadane(arreglo, tamano)
VARIABLES:
    max_actual, max_global
INICIO
    max_actual = arreglo[0]
    max_global = arreglo[0]

    PARA i DESDE 1 HASTA tamano-1 HACER
        max_actual = MAXIMO(arreglo[i], max_actual + arreglo[i])
        SI max_actual > max_global ENTONCES
            max_global = max_actual
        FIN SI
    FIN PARA
    RETORNAR max_global
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Algoritmo de Kadane (Suma máxima de subarreglo)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_kadane_suma_maxim(int val);

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
- **Proceso:** Se recorre el arreglo una sola vez, manteniendo dos variables:
- `max_actual`: La suma máxima del subarreglo que termina en la posición actual.
- `max_global`: La suma máxima encontrada en todo el arreglo hasta el momento.
- En cada paso `i`:
- `max_actual = MAXIMO(arreglo[i], max_actual + arreglo[i])`
- `max_global = MAXIMO(max_global, max_actual)`
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
