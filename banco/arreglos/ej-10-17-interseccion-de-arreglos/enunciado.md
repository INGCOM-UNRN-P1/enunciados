Crear una función que reciba dos arreglos y devuelva un nuevo arreglo con los
elementos que son comunes a ambos. Cada elemento debe aparecer solo una vez en
el resultado.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION interseccion(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
    i, j (enteros)
INICIO
    i=0, j=0
    MIENTRAS i < n1 Y j < n2 HACER
        SI a1[i] < a2[j] ENTONCES
            i = i + 1
        SINO SI a2[j] < a1[i] ENTONCES
            j = j + 1
        SINO // Son iguales
            AÑADIR a1[i] a resultado (si no está ya)
            i = i + 1, j = j + 1
        FIN SI
    FIN MIENTRAS
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Intersección de arreglos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_rseccion_de_arreglos(int val);

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
- **Entrada:** Dos arreglos y sus tamaños.
- **Proceso (con arreglos ordenados):** Usar dos punteros, uno para cada arreglo. Si los elementos son iguales, se añade al resultado y se avanzan ambos punteros. Si son diferentes, se avanza el puntero del arreglo que tenga el elemento más pequeño.
- **Proceso (con arreglos desordenados):** Usar lazos anidados. Para cada elemento del primer arreglo, buscar si existe en el segundo. Para evitar duplicados en el resultado, se puede usar una estructura de datos auxiliar (hash set) o verificar si el elemento ya fue añadido.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
