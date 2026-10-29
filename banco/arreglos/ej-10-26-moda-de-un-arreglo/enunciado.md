Encontrar la moda de un arreglo, que es el elemento que aparece con mayor
frecuencia.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_moda(arreglo, tamano)
VARIABLES:
    moda, max_frecuencia, frec_actual, elemento_actual
INICIO
    ORDENAR(arreglo, tamano)
    moda = arreglo[0], max_frecuencia = 1, frec_actual = 1

    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] == arreglo[i-1] ENTONCES
            frec_actual = frec_actual + 1
        SINO
            frec_actual = 1
        FIN SI
        SI frec_actual > max_frecuencia ENTONCES
            max_frecuencia = frec_actual
            moda = arreglo[i]
        FIN SI
    FIN PARA
    RETORNAR moda
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Moda de un arreglo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_6_moda_de_un_arreglo(int val);

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
- **Proceso (con ordenamiento):**
- Ordenar el arreglo. Esto agrupa los elementos iguales.
- Recorrer el arreglo y contar la longitud de cada secuencia de elementos idénticos.
- Llevar un registro del elemento con la frecuencia más alta encontrada hasta el momento.
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
