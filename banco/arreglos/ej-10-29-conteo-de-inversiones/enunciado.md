Contar el número de "inversiones" en un arreglo. Una inversión es un par de
índices `(i, j)` tales que `i < j` y `arr[i] > arr[j]`. Un arreglo perfectamente
ordenado tiene 0 inversiones.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION contar_inversiones(arreglo, tamano)
VARIABLES:
    contador (entero)
INICIO
    contador = 0
    PARA i DESDE 0 HASTA tamano-2 HACER
        PARA j DESDE i+1 HASTA tamano-1 HACER
            SI arreglo[i] > arreglo[j] ENTONCES
                contador = contador + 1
            FIN SI
        FIN PARA
    FIN PARA
    RETORNAR contador
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conteo de inversiones
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_onteo_de_inversiones(int val);

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
- **Proceso (Fuerza Bruta):** Usar dos lazos anidados. El lazo exterior itera con `i` desde 0 hasta `n-2`. El lazo interior itera con `j` desde `i+1` hasta `n-1`. Si `arreglo[i] > arreglo[j]`, se incrementa un contador.
- **Complejidad:** La solución de fuerza bruta es O(n^2). Existen algoritmos más eficientes basados en Merge Sort.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
