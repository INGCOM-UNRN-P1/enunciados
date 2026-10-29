Crear una función que reciba dos arreglos y devuelva un nuevo arreglo con todos
los elementos de ambos, sin duplicados.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION union_arreglos(a1, n1, a2, n2)
VARIABLES:
    resultado (arreglo)
    // Usar una tabla hash o similar para eficiencia
    elementos_vistos (conjunto)
INICIO
    PARA cada elemento x en a1 HACER
        AÑADIR x a resultado
        AÑADIR x a elementos_vistos
    FIN PARA
    PARA cada elemento y en a2 HACER
        SI y NO ESTÁ EN elementos_vistos ENTONCES
            AÑADIR y a resultado
            AÑADIR y a elementos_vistos
        FIN SI
    FIN PARA
    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Unión de arreglos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_18_union_de_arreglos(int val);

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
- **Proceso:**
- Copiar el primer arreglo a un arreglo de resultado temporal.
- Recorrer el segundo arreglo. Para cada elemento, verificar si ya existe en el resultado temporal.
- Si no existe, añadirlo.
- **Optimización:** Usar una tabla hash para llevar un registro de los elementos ya añadidos mejora la eficiencia de la búsqueda.
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
