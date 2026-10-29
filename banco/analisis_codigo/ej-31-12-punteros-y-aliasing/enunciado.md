:::{exercise} analisis_aliasing
:label: analisis_aliasing

Analizá el siguiente código que presenta un problema común con punteros:

```{code-block} c
:linenos:
#include <stdio.h>
#include <string.h>
void procesar_datos(int *p1, int *p2, int valor)
{
    *p1 = valor;
    *p2 = valor * 2;
    printf("p1 apunta a: %d\n", *p1);
    printf("p2 apunta a: %d\n", *p2);
}
int main(void)
{
    int x = 10;
    // Caso 1
    procesar_datos(&x, &x, 5);
    printf("Resultado x: %d\n\n", x);
    // Caso 2
    int y = 10;
    int z = 20;
    procesar_datos(&y, &z, 5);
    printf("Resultado y: %d, z: %d\n", y, z);
    return 0;
}
```

**Tarea**:

1. **Análisis de aliasing**: ¿Qué sucede cuando `p1` y `p2` apuntan a la misma
   dirección?
2. **Predicción de salida**: ¿Qué valores se imprimirán en cada caso?
3. **Identificación del problema**: ¿Por qué el Caso 1 produce un resultado
   inesperado?
4. **Roles de variables**: Identificá el rol de `p1`, `p2` y `valor`
5. **Mejoras**: ¿Cómo modificarías la función para prevenir este problema?

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

:::{solution} analisis_aliasing
:class: dropdown

**1. Análisis de Aliasing:**

En el Caso 1, `p1` y `p2` apuntan a la misma dirección de memoria (`&x`). Esto
se llama **aliasing** y provoca que las modificaciones a través de un puntero
afecten al otro.

**Secuencia de ejecución en Caso 1:**
```
*p1 = valor;       // x = 5
*p2 = valor * 2;   // x = 10 (sobrescribe el valor anterior)
```

**2. Predicción de Salida:**

**Caso 1:**
```
p1 apunta a: 10    // p1 y p2 apuntan a x, que vale 10
p2 apunta a: 10
Resultado x: 10
```

**Caso 2:**
```
p1 apunta a: 5     // y = 5
p2 apunta a: 10    // z = 10
Resultado y: 5, z: 10
```

**3. Identificación del Problema:**

El problema es que la función asume que `p1` y `p2` apuntan a ubicaciones
diferentes. Cuando apuntan a la misma, la segunda asignación sobrescribe la
primera, perdiendo el valor original.

**4. Roles de Variables:**

- `p1`: **Parámetro de salida (output parameter)** - modifica el valor apuntado
- `p2`: **Parámetro de salida (output parameter)** - modifica otro valor
  apuntado
- `valor`: **Parámetro de entrada (input parameter)** - valor base para los
  cálculos

**5. Mejoras Sugeridas:**

**Opción 1: Verificar aliasing**
```{code-block} c
:linenos:
void procesar_datos(int *p1, int *p2, int valor)
{
    if (p1 == p2)
    {
        fprintf(stderr,
                "Error: p1 y p2 no pueden apuntar a la misma dirección\n");
        return;
    }
    *p1 = valor;
    *p2 = valor * 2;
}
```

**Opción 2: Usar `restrict` (C99)**
``` c
void procesar_datos(int *restrict p1, int *restrict p2, int valor)
{
    *p1 = valor;
    *p2 = valor * 2;
}
```
El keyword `restrict` promete al compilador que los punteros no tienen aliasing.

**Opción 3: Documentar el requisito**
``` c
// PRECONDICIÓN: p1 y p2 deben apuntar a ubicaciones diferentes
// POSTCONDICIÓN: *p1 = valor, *p2 = valor * 2
void procesar_datos(int *p1, int *p2, int valor);
```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Operación procesar_datos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
void procesar_datos(int *p1, int *p2, int valor);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
