Invertir el orden de los elementos de un arreglo _in-place_, es decir, sin usar
un segundo arreglo para almacenar el resultado temporalmente.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO invertir_arreglo(REF arreglo, tamano)
VARIABLES:
    inicio, fin, temporal (enteros)
INICIO
    inicio = 0
    fin = tamano - 1
    MIENTRAS inicio < fin HACER
        // Intercambiar elementos
        temporal = arreglo[inicio]
        arreglo[inicio] = arreglo[fin]
        arreglo[fin] = temporal

        inicio = inicio + 1
        fin = fin - 1
    FIN MIENTRAS
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Inversión
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_10_10_inversion(int val);

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
- **Entrada:** Un arreglo y su tamaño.
- **Proceso:** Utilizar dos índices (o punteros): `inicio` comenzando en 0 y `fin` comenzando en `tamaño-1`.
- Usar un lazo `while` que se ejecute mientras `inicio < fin`.
- En cada iteración:
- Intercambiar los elementos en las posiciones `inicio` y `fin`.
- Incrementar `inicio` y decrementar `fin` para moverse hacia el centro del arreglo.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
