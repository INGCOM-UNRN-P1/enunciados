Encontrar todos los "líderes" en un arreglo. Un elemento es un líder si es mayor
que todos los elementos que se encuentran a su derecha. El elemento más a la
derecha siempre es un líder.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_lideres(arreglo, tamano)
VARIABLES:
    maximo_derecha (entero)
INICIO
    maximo_derecha = arreglo[tamano-1]
    ESCRIBIR maximo_derecha

    PARA i DESDE tamano-2 HASTA 0 CON PASO -1 HACER
        SI arreglo[i] > maximo_derecha ENTONCES
            maximo_derecha = arreglo[i]
            ESCRIBIR maximo_derecha
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Líderes en un arreglo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ideres_en_un_arreglo(int val);

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
- **Proceso (recorrido inverso):** La forma más eficiente es recorrer el arreglo de derecha a izquierda.
- El último elemento siempre es un líder. Guardarlo como `maximo_derecha`.
- Iterar desde el penúltimo elemento hacia el principio.
- Si el elemento actual es mayor que `maximo_derecha`, es un nuevo líder. Imprimirlo y actualizar `maximo_derecha`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
