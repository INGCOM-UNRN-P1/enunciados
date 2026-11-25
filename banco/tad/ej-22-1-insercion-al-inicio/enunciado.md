Implementar la operación de insertar un elemento al principio de la lista. Esta
operación debe tener complejidad $O(1)$.



``` c
bool insertar_al_inicio(lista_t *lista, int dato);
```

```{dibu}
:caption: `insertar_al_inicio(lista, 5)`: el nodo nuevo apunta al que era el primero y pasa a ser la cabeza. No hace falta recorrer la lista, por eso es $O(1)$.
- type: linked_list
  title: Antes
  values: [7, 3]
- type: linked_list
  title: Después de insertar_al_inicio(lista, 5)
  values: [5, 7, 3]
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Inserción al Inicio
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__insercion_al_inicio(int val);

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
2. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Implementar encapsulamiento completo manteniendo la definición interna oculta en el archivo `.c`.
- Añadir una función de duplicación profunda (*deep copy*) para copiar la estructura de forma segura.
:::
