Encontrar los valores más grande (máximo) y más pequeño (mínimo) dentro de un
arreglo de números.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO encontrar_max_min(arreglo, tamano, REF maximo, REF minimo)
INICIO
    SI tamano == 0 ENTONCES TERMINAR // Arreglo vacío

    maximo = arreglo[0]
    minimo = arreglo[0]

    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] > maximo ENTONCES
            maximo = arreglo[i]
        FIN SI
        SI arreglo[i] < minimo ENTONCES
            minimo = arreglo[i]
        FIN SI
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Máximo y mínimo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_10_5_maximo_y_minimo(int val);

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
- **Proceso:**
- Inicializar dos variables, `maximo` y `minimo`, con el valor del primer elemento del arreglo (`arreglo[0]`).
- Recorrer el arreglo con un lazo `for` comenzando desde el segundo elemento (`i=1`).
- En cada iteración, comparar el elemento actual `arreglo[i]` con `maximo`. Si `arreglo[i]` es mayor, actualizar `maximo`.
- Hacer lo mismo para `minimo`, actualizándolo si `arreglo[i]` es menor.
- **Salida:** Devolver los valores de `maximo` y `minimo` (por ejemplo, usando punteros).
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
