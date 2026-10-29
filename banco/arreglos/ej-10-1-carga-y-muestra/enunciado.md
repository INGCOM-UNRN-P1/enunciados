Crear dos funciones complementarias para manejar arreglos: una para que el
usuario ingrese datos y llene un arreglo, y otra para mostrar el contenido del
arreglo de una forma clara y legible.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO cargar_arreglo(REF arreglo, tamano)
INICIO
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR "Ingrese el elemento ", i, ":"
        LEER arreglo[i]
    FIN PARA
FIN PROCEDIMIENTO

PROCEDIMIENTO mostrar_arreglo(arreglo, tamano)
INICIO
    ESCRIBIR "[" SIN SALTO DE LÍNEA
    PARA i DESDE 0 HASTA tamano-1 HACER
        ESCRIBIR arreglo[i]
        SI i < tamano-1 ENTONCES
            ESCRIBIR ", " SIN SALTO DE LÍNEA
        FIN SI
    FIN PARA
    ESCRIBIR "]"
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Carga y muestra
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_10_1_carga_y_muestra(int val);

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
- **`cargar_arreglo`:**
- **Entrada:** Un arreglo y su tamaño.
- **Proceso:** Usar un lazo `for` que itere desde 0 hasta `tamaño-1`. En cada iteración, solicitar al usuario un número y almacenarlo en la posición correspondiente del arreglo (`arreglo[i]`).
- **`mostrar_arreglo`:**
- **Entrada:** Un arreglo y su tamaño.
- **Proceso:** Usar un lazo `for` para recorrer el arreglo.
- **Salida:** Imprimir los elementos de una forma legible, por ejemplo, entre corchetes y separados por comas.
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
