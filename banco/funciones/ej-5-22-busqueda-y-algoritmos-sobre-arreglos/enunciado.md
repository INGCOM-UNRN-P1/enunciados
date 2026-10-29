Implementá funciones modulares para operaciones sobre arreglos de enteros:
- `int busqueda_lineal(const int arr[], int n, int objetivo)`: retorna el índice de la primera aparición o `-1`.
- `int encontrar_maximo(const int arr[], int n)`: retorna el valor máximo contenido en el arreglo.
- `int contar_ocurrencias(const int arr[], int n, int valor)`: cuenta cuántas veces aparece un elemento.

**Orientación:**
- Usá el calificador `const` en los arreglos para garantizar que las funciones de consulta no los modifiquen
- Validá que `n > 0` antes de buscar el máximo



---
(ejercicio_5_23)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Búsqueda y Algoritmos sobre Arreglos
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_22(int n);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
