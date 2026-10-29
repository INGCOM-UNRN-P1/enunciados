Dado un arreglo de números, crear un nuevo arreglo donde cada elemento en la
posición `i` sea el producto de todos los demás números del arreglo original,
pero sin usar el operador de división.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION producto_de_los_demas(arreglo, tamano)
VARIABLES:
    resultado (arreglo de tamaño n)
    izquierda_prod, derecha_prod
INICIO
    izquierda_prod = 1
    PARA i DESDE 0 HASTA tamano-1 HACER
        resultado[i] = izquierda_prod
        izquierda_prod = izquierda_prod * arreglo[i]
    FIN PARA

    derecha_prod = 1
    PARA i DESDE tamano-1 HASTA 0 CON PASO -1 HACER
        resultado[i] = resultado[i] * derecha_prod
        derecha_prod = derecha_prod * arreglo[i]
    FIN PARA

    RETORNAR resultado
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Producto de los demás elementos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_los_demas_elemento(int val);

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
- **Proceso (dos pasadas):**
- Crear un arreglo `resultado`.
- **Primera pasada (izquierda a derecha):** Recorrer el arreglo. Para cada `i`, `resultado[i]` será el producto de todos los elementos a su izquierda. Mantener un acumulador `izquierda_prod`.
- **Segunda pasada (derecha a izquierda):** Recorrer el arreglo al revés. Mantener un acumulador `derecha_prod`. Multiplicar `resultado[i]` por `derecha_prod` para incorporar los productos de la derecha.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
