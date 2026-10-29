Encontrar el segundo elemento más grande en un arreglo. Este ejercicio requiere
un seguimiento más cuidadoso que simplemente encontrar el máximo.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION encontrar_segundo_maximo(arreglo, tamano)
VARIABLES:
    maximo, segundo_maximo
INICIO
    // Inicializar con los dos primeros elementos o valores muy bajos
    maximo = MINIMO_VALOR_POSIBLE
    segundo_maximo = MINIMO_VALOR_POSIBLE

    PARA cada elemento x EN arreglo HACER
        SI x > maximo ENTONCES
            segundo_maximo = maximo
            maximo = x
        SINO SI x > segundo_maximo Y x < maximo ENTONCES
            segundo_maximo = x
        FIN SI
    FIN PARA
    RETORNAR segundo_maximo
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Casi máximo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_10_6_casi_maximo(int val);

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
- **Variables:** Se necesitan dos variables: `maximo` y `segundo_maximo`. Inicializarlas con el menor valor posible o con los dos primeros elementos del arreglo de forma ordenada.
- **Proceso:**
- Recorrer el arreglo.
- Si el elemento actual `x` es mayor que `maximo`: a. `segundo_maximo` toma el valor de `maximo`. b. `maximo` toma el valor de `x`.
- Si no, si `x` es mayor que `segundo_maximo` y diferente de `maximo`, se actualiza `segundo_maximo` a `x`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
