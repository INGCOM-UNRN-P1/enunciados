:::{exercise} analisis_1
:label: analisis_1

Analizá el siguiente sistema completo que gestiona una lista de estudiantes:

```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nombre[50];
    int edad;
    float promedio;
} estudiante_t;
typedef struct
{
    estudiante_t *lista;
    int cantidad;
    int capacidad;
} sistema_estudiantes_t;
sistema_estudiantes_t *inicializar_sistema(int capacidad_inicial)
{
    sistema_estudiantes_t *sistema = malloc(sizeof(sistema_estudiantes_t));
    sistema->lista = malloc(capacidad_inicial * sizeof(estudiante_t));
    sistema->cantidad = 0;
    sistema->capacidad = capacidad_inicial;
    return sistema;
}
bool agregar_estudiante(sistema_estudiantes_t *sistema, const char *nombre,
                        int edad, float promedio)
{
    if (sistema->cantidad >= sistema->capacidad)
    {
        // Redimensionar
        int nueva_capacidad = sistema->capacidad * 2;
        estudiante_t *nueva_lista =
            realloc(sistema->lista, nueva_capacidad * sizeof(estudiante_t));
        if (nueva_lista == NULL)
        {
            return false;
        }
        sistema->lista = nueva_lista;
        sistema->capacidad = nueva_capacidad;
    }
    // Agregar nuevo estudiante
    strcpy(sistema->lista[sistema->cantidad].nombre, nombre);
    sistema->lista[sistema->cantidad].edad = edad;
    sistema->lista[sistema->cantidad].promedio = promedio;
    sistema->cantidad++;
    return true;
}
estudiante_t *buscar_mejor_estudiante(sistema_estudiantes_t *sistema)
{
    if (sistema->cantidad == 0)
    {
        return NULL;
    }
    estudiante_t *mejor = &sistema->lista[0];
    for (int i = 1; i < sistema->cantidad; i++)
    {
        if (sistema->lista[i].promedio > mejor->promedio)
        {
            mejor = &sistema->lista[i];
        }
    }
    return mejor;
}
void liberar_sistema(sistema_estudiantes_t *sistema)
{
    if (sistema != NULL)
    {
        free(sistema->lista);
        free(sistema);
    }
}
```

**Tarea**: Realizá un análisis completo del sistema:

1. **Identificación de roles**: Para cada variable en cada función, identificá
   su rol
2. **Análisis de memoria**: Describí cómo evoluciona el uso de memoria durante
   la ejecución
3. **Identificación de patrones**: ¿Qué patrones de diseño reconocés?
4. **Análisis de robustez**: ¿Qué validaciones faltan? ¿Qué podría fallar?

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

:::{solution} analisis_1
:class: dropdown

**1. Identificación de Roles por Función:**

**`inicializar_sistema`:**
- `capacidad_inicial`: Parámetro de entrada (tamaño inicial)
- `sistema`: Variable de salida local (estructura a retornar)

**`agregar_estudiante`:**
- `sistema`: Parámetro de entrada/salida (modificado por referencia)
- `nombre`, `edad`, `promedio`: Parámetros de entrada
- `nueva_capacidad`: Variable temporal (cálculo de redimensión)
- `nueva_lista`: Variable temporal/auxiliar (para verificación de realloc)

**`buscar_mejor_estudiante`:**
- `sistema`: Parámetro de entrada (solo lectura)
- `mejor`: Variable de mejor candidato/guardián
- `i`: Variable de control de lazo

**`liberar_sistema`:**
- `sistema`: Parámetro de entrada (puntero a liberar)

**2. Análisis de Memoria:**

**Estado inicial**: 
- Heap: `sizeof(sistema_estudiantes_t)` + `capacidad_inicial *
  sizeof(estudiante_t)`
- Pila: Variables locales de cada función

**Durante agregado**: 
- Si `cantidad < capacidad`: Solo se modifica contenido
- Si `cantidad >= capacidad`: Realloc duplica el espacio, posible fragmentación

**3. Patrones de Diseño:**
- **Dynamic Array**: Lista que crece automáticamente
- **Handle Pattern**: El sistema actúa como handle para la colección
- **RAII-like**: Funciones específicas para inicializar y limpiar

**4. Análisis de Robustez - Problemas identificados:**

**Falta de validaciones:**
```{code-block} c
:linenos:
// En agregar_estudiante - faltan validaciones:
if (sistema == NULL || nombre == NULL)
{
    return false;
}
if (strlen(nombre) >= 50)
{ // nombre muy largo
    return false;
}
if (edad < 0 || edad > 120)
{ // edad inválida
    return false;
}
if (promedio < 0.0 || promedio > 10.0)
{ // promedio inválido
    return false;
}
```

**Problemas de robustez:**
- No validación de punteros NULL
- No verificación de límites de strings
- No validación de rangos de datos
- Posible integer overflow en `nueva_capacidad`
- No hay función para verificar estado del sistema

**Mejoras sugeridas:**
- Agregar validaciones de entrada en todas las funciones
- Implementar códigos de error más específicos
- Agregar función de consulta de estado
- Considerar límite máximo de capacidad
- Agregar tests unitarios para cada función

:::

Este ejercicio integra todos los conceptos de análisis de código, roles de
variables, manejo de memoria y buenas prácticas de programación en C.

### 📋 Contrato de las Funciones

```c
/*
 * Operación agregar_estudiante
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool agregar_estudiante(sistema_estudiantes_t *sistema, const char *nombre,
                        int edad, float promedio);

/*
 * Operación liberar_sistema
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void liberar_sistema(sistema_estudiantes_t *sistema);

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

:::{hint} Consideraciones Didácticas
- Revisá detenidamente el flujo de control y las transiciones de estado del sistema.
- Verificá la validez de los punteros y el ciclo de vida de los recursos compartidos.
- Identificá posibles condiciones de carrera o inconsistencias en la liberación de memoria.
:::
