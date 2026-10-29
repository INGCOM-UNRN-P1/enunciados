Encapsular un arreglo en una estructura para agrupar el contenedor de datos, su
longitud actual y su capacidad máxima. Esto previene errores de desbordamiento
de búfer y simplifica pasar la información del arreglo a funciones.



``` c
#define CAPACIDAD_MAX 100
typedef struct
{
    int datos[CAPACIDAD_MAX];
    size_t longitud; // Elementos actualmente en uso
} arreglo_t;
```

Este ejercicio puede ser mejorado con memoria dinámica, para lo cual es
necesario agregar un atributo más con el tamaño en memoria pedido para `datos`.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Arreglos con Capacidad
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_reglos_con_capacidad(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::
