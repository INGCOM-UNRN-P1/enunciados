Dado un arreglo de números y un valor `X`, determinar si existe un par de
elementos en el arreglo cuya suma sea exactamente `X`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION existe_par_con_suma(arreglo, tamano, X)
VARIABLES:
    izquierda, derecha, suma (enteros)
INICIO
    ORDENAR(arreglo, tamano)
    izquierda = 0, derecha = tamano - 1

    MIENTRAS izquierda < derecha HACER
        suma = arreglo[izquierda] + arreglo[derecha]
        SI suma == X ENTONCES
            RETORNAR VERDADERO
        SINO SI suma < X ENTONCES
            izquierda = izquierda + 1
        SINO
            derecha = derecha - 1
        FIN SI
    FIN MIENTRAS
    RETORNAR FALSO
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Encontrar par con suma X
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ntrar_par_con_suma_x(int val);

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
- **Proceso (Ordenando):**
- Ordenar el arreglo.
- Usar dos punteros: `izquierda` en el inicio y `derecha` en el final.
- Mientras `izquierda < derecha`: a. Calcular la suma `s = arreglo[izquierda] + arreglo[derecha]`. b. Si `s == X`, se encontró el par. c. Si `s < X`, se necesita una suma mayor, así que se mueve `izquierda` a la derecha. d. Si `s > X`, se necesita una suma menor, así que se mueve `derecha` a la izquierda.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
