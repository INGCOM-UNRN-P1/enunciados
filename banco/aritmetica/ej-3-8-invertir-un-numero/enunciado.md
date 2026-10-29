#### Descripción
Tomar un número entero y devolver otro número con sus dígitos en orden inverso.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION invertir_numero(n)
VARIABLES:
    invertido (entero)
INICIO
    invertido = 0
    MIENTRAS n > 0 HACER
        invertido = (invertido * 10) + (n MOD 10)
        n = n / 10
    FIN MIENTRAS
    RETORNAR invertido
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Invertir un número
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_8_invertir_un_numero(int val);

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
- **Entrada:** Un entero `n`.
- **Proceso:** Similar a la suma de dígitos, pero en lugar de sumar, se construye un nuevo número.
- Inicializar `invertido = 0`.
- En un lazo, mientras `n > 0`: a. `invertido = (invertido * 10) + (n % 10)`. b. `n = n / 10`. desbordamientos de búfer validando la capacidad máxima. líneas de manera robusta.
- Manejar adecuadamente números terminados en ceros.
- Validar si el número invertido excede el rango máximo de un entero int.
:::
