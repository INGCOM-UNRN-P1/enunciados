Escribir una función que fusione dos arreglos en un tercer arreglo que contenga
todos los elementos de los dos primeros. Si los arreglos originales están
ordenados, el resultado también debería estarlo (ver Merge Sort).


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION fusionar_ordenado(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo de tamaño n1+n2)
    i, j, k (enteros)
INICIO
    i=0, j=0, k=0
    MIENTRAS i < n1 Y j < n2 HACER
        SI a1[i] <= a2[j] ENTONCES
            resultado[k] = a1[i]
            i = i + 1
        SINO
            resultado[k] = a2[j]
            j = j + 1
        FIN SI
        k = k + 1
    FIN MIENTRAS

    // Copiar elementos restantes
    MIENTRAS i < n1 HACER
        resultado[k] = a1[i]
        i = i + 1, k = k + 1
    FIN MIENTRAS
    MIENTRAS j < n2 HACER
        resultado[k] = a2[j]
        j = j + 1, k = k + 1
    FIN MIENTRAS

    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Fusión de arreglos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_6_fusion_de_arreglos(int val);

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
- **Entrada:** Dos arreglos (`a1`, `a2`) con sus respectivos tamaños (`n1`, `n2`).
- **Salida:** Un nuevo arreglo de tamaño `n1 + n2`.
- **Proceso (desordenado):** Simplemente copiar todos los elementos de `a1` al nuevo arreglo, y luego todos los elementos de `a2` a continuación.
- **Proceso (ordenado):** Usar el algoritmo de mezcla de Merge Sort. Con tres punteros (`i` para `a1`, `j` para `a2`, `k` para el resultado), comparar `a1[i]` y `a2[j]`, copiar el menor al resultado y avanzar el puntero correspondiente.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
