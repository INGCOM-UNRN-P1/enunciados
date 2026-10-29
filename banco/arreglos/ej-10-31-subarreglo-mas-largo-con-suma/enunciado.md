Dado un arreglo de enteros (positivos y negativos), encontrar la longitud del
subarreglo contiguo más largo cuya suma de elementos sea cero.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION subarreglo_suma_cero(arreglo, tamano)
VARIABLES:
    mapa_sumas (tabla hash)
    suma, max_longitud (enteros)
INICIO
    suma = 0, max_longitud = 0
    PARA i DESDE 0 HASTA tamano-1 HACER
        suma = suma + arreglo[i]
        SI suma == 0 ENTONCES
            max_longitud = i + 1
        SINO SI mapa_sumas CONTIENE suma ENTONCES
            max_longitud = MAXIMO(max_longitud, i - mapa_sumas[suma])
        SINO
            mapa_sumas[suma] = i
        FIN SI
    FIN PARA
    RETORNAR max_longitud
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Subarreglo más largo con suma cero
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_o_mas_largo_con_suma(int val);

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
- **Proceso (Tabla Hash):**
- Usar una tabla hash para almacenar las sumas acumuladas y sus primeros índices de aparición.
- Recorrer el arreglo, manteniendo una `suma_actual`.
- Si `suma_actual` ya se ha visto antes en el índice `j`, entonces el subarreglo desde `j+1` hasta la posición actual tiene suma cero. Calcular su longitud y actualizar la longitud máxima.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
