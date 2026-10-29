:::{exercise} analisis_dangling
:label: analisis_dangling

Analizá el siguiente código que contiene varios errores relacionados con
punteros colgantes:

```{code-block} c
:linenos:
#include <stdlib.h>
#include <string.h>
// Función A
char *obtener_saludo(void)
{
    char saludo[50] = "Hola, mundo!";
    return saludo; // Línea problemática 1
}
// Función B
int *crear_arreglo_estatico(void)
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}
// Función C
int *crear_arreglo_dinamico(void)
{
    int *arr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}
// Función D
void procesar_y_liberar(int **ptr)
{
    free(*ptr);
    // Línea problemática 2: no se asigna NULL
}
int main(void)
{
    // Escenario 1
    char *s1 = obtener_saludo();
    printf("%s\n", s1); // Comportamiento indefinido
    // Escenario 2
    int *arr1 = crear_arreglo_estatico();
    printf("%d\n", arr1[0]); // OK
    // Escenario 3
    int *arr2 = crear_arreglo_dinamico();
    printf("%d\n", arr2[0]); // OK
    free(arr2);
    // Escenario 4
    int *arr3 = crear_arreglo_dinamico();
    procesar_y_liberar(&arr3);
    printf("%d\n", arr3[0]); // Línea problemática 3: uso después de free
    return 0;
}
```

**Tarea**:

1. **Identificar punteros colgantes**: ¿En qué líneas hay punteros colgantes?
2. **Clasificar errores**: Para cada error, explicá por qué ocurre
3. **Análisis de memoria**: Describí el estado de la memoria en cada escenario
4. **Comportamiento**: ¿Qué podría pasar al ejecutar este código?
5. **Correcciones**: Proponé soluciones para cada problema identificado

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::

:::{solution} analisis_dangling
:class: dropdown

**1. Identificación de Punteros Colgantes:**

**Línea problemática 1:** `return saludo;` en `obtener_saludo()`
**Línea problemática 3:** `printf("%d\n", arr3[0]);` después de
`procesar_y_liberar()`

**2. Clasificación de Errores:**

**Error 1: Retornar dirección de variable local**
``` c
char *obtener_saludo(void)
{
    char saludo[50] = "Hola, mundo!";
    return saludo; // ¡ERROR!
}
```
**Problema:** `saludo` es un arreglo local en el stack. Cuando la función
retorna, el stack frame se destruye y la memoria ya no es válida. El puntero
retornado apunta a memoria inválida.

**Error 2: No anular puntero después de free**
``` c
void procesar_y_liberar(int **ptr)
{
    free(*ptr);
    // Debería: *ptr = NULL;
}
```
**Problema:** Después de `free()`, el puntero sigue apuntando a la misma
dirección, pero esa memoria ya fue liberada. Esto es un **dangling pointer**.

**3. Análisis de Memoria por Escenario:**

**Escenario 1:**
```
Stack antes de retornar:
[saludo: "Hola, mundo!"] <- puntero s1 apuntará aquí

Stack después de retornar:
[basura o datos de otra función] <- s1 apunta a zona inválida
```
**Resultado:** Comportamiento indefinido. Podría funcionar "por casualidad" o
crashear.

**Escenario 2:**
```
Segmento de datos (static):
arr1 -> [1][2][3][4][5]  <- Permanece durante toda la ejecución
```
**Resultado:** OK. Las variables static persisten.

**Escenario 3:**
```
Heap:
arr2 -> [1][2][3][4][5]  <- Memoria reservada con malloc
... uso ...
free(arr2)               <- Memoria liberada
arr2 sigue apuntando aquí (pero ya no es válido)
```
**Resultado:** OK porque se usa antes de free.

**Escenario 4:**
```
Heap:
arr3 -> [1][2][3][4][5]
free(*ptr)               <- Memoria liberada
arr3 -> [???] (memoria inválida)  <- Dangling pointer
printf("%d\n", arr3[0])  <- Acceso a memoria liberada
```
**Resultado:** Comportamiento indefinido. Podría:
- Imprimir basura
- Causar segmentation fault
- "Funcionar" si la memoria no fue reutilizada aún

**4. Comportamiento al Ejecutar:**

- **Escenario 1:** Probablemente imprime basura o el saludo "por suerte"
- **Escenario 2:** Funciona correctamente
- **Escenario 3:** Funciona correctamente
- **Escenario 4:** Comportamiento indefinido, muy probable crash

**5. Correcciones:**

**Corrección Función A - Opción 1: Usar malloc**
```{code-block} c
:linenos:
char *obtener_saludo(void)
{
    char *saludo = malloc(50);
    if (saludo == NULL)
        return NULL;
    strcpy(saludo, "Hola, mundo!");
    return saludo; // OK: memoria en heap persiste
}
// El llamador debe hacer free(saludo)
```

**Corrección Función A - Opción 2: Usar static**
``` c
char *obtener_saludo(void)
{
    static char saludo[50] = "Hola, mundo!";
    return saludo; // OK: variable static persiste
}
// NOTA: No es thread-safe
```

**Corrección Función A - Opción 3: Pasar buffer**
```{code-block} c
:linenos:
void obtener_saludo(char *buffer, size_t tam)
{
    if (buffer == NULL || tam < 14)
        return;
    strcpy(buffer, "Hola, mundo!");
}
// Uso:
char saludo[50];
obtener_saludo(saludo, sizeof(saludo));
```

**Corrección Función D:**
``` c
void procesar_y_liberar(int **ptr)
{
    if (ptr == NULL || *ptr == NULL)
        return;
    free(*ptr);
    *ptr = NULL; // IMPORTANTE: Anular el puntero
}
```

**Corrección main():**
```{code-block} c
:linenos:
int *arr3 = crear_arreglo_dinamico();
procesar_y_liberar(&arr3);
// No usar arr3 aquí
if (arr3 != NULL)
{ // Esto ahora es false
    printf("%d\n", arr3[0]);
}
```

**Buenas Prácticas:**
1. Siempre anular punteros después de `free()`
2. No retornar direcciones de variables locales
3. Documentar quién es responsable de liberar memoria
4. Usar herramientas como Valgrind para detectar estos errores
5. Considerar patrones como RAII (en C con funciones de limpieza)

:::

### 📋 Contrato de las Funciones

```c
/*
 * Operación procesar_y_liberar
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void procesar_y_liberar(int **ptr);

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
