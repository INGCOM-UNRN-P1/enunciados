Implementar un stack usando tipo opaco completo en C11:

**`stack.h`** (interfaz pública):

```{code-block} c
:linenos:
#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#include <stddef.h>
typedef struct stack stack_t; // Declaración adelantada
stack_t *stack_crear(size_t capacidad_inicial);
void stack_destruir(stack_t **ptr_stack);
bool stack_push(stack_t *stack, int valor);
bool stack_pop(stack_t *stack, int *valor);
bool stack_peek(const stack_t *stack, int *valor);
size_t stack_tamano(const stack_t *stack);
bool stack_esta_vacio(const stack_t *stack);
#endif
```

**Tareas:**
1. Implementar `stack.c` con la estructura interna oculta.
2. Garantizar que el usuario no pueda acceder a los campos internos directamente.
3. Manejar correctamente los errores (stack vacío, punteros nulos o memoria agotada).

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Implementación de Tipo Opaco Básico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cion_de_tipo_opaco_b(int val);
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
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
4. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
