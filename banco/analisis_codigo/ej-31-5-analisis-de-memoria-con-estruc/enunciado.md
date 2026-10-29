:::{exercise} estado_struct
:label: estado_struct

Analizá el estado de memoria del siguiente programa en el punto marcado:

```{code-block} c
:linenos:
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char *nombre;
    int edad;
    double salario;
} empleado_t;
empleado_t *crear_empleado(const char *nom, int edad_emp, double sal)
{
    empleado_t *nuevo = malloc(sizeof(empleado_t));
    int len_nombre = strlen(nom);
    nuevo->nombre = malloc(len_nombre + 1);
    strcpy(nuevo->nombre, nom);
    nuevo->edad = edad_emp;
    nuevo->salario = sal;
    // PUNTO DE ANÁLISIS
    return nuevo;
}
int main()
{
    empleado_t *emp1 = NULL;
    empleado_t *emp2 = NULL;
    emp1 = crear_empleado("Ana García", 28, 45000.0);
    return 0;
}
```

**Tarea**: Describí el estado de memoria en el punto de análisis:

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

:::{solution} estado_struct
:class: dropdown

- **Pila (Stack)**:
  - **Marco de `main`**:
    - `emp1` (puntero): `NULL` (aún no asignado, la función no ha retornado)
    - `emp2` (puntero): `NULL`
  - **Marco de `crear_empleado`**:
    - `nom` (puntero): Apunta a la cadena literal "Ana García" en el segmento de
      datos
    - `edad_emp` (int): 28
    - `sal` (double): 45000.0
    - `nuevo` (puntero): Apunta al bloque de `sizeof(empleado_t)` bytes en el
      heap
    - `len_nombre` (int): 10 (longitud de "Ana García")

- **Montículo (Heap)**:
  - **Bloque 1**: `sizeof(empleado_t)` bytes para la estructura empleado
    - `nombre` (puntero): Apunta al segundo bloque en el heap
    - `edad` (int): 28
    - `salario` (double): 45000.0
  - **Bloque 2**: 11 bytes conteniendo "Ana García\0"

- **Segmento de Datos (Solo Lectura)**:
  - Cadena literal "Ana García" (11 bytes incluyendo '\0')

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Análisis de Memoria con Estructuras
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_memoria_con_estruc(int val);

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
