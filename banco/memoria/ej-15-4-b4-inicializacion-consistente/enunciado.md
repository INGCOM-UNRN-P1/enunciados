Implementar una función `struct producto_t* crear_producto(const char* nombre,
double precio)` que:
1. Verifique que los parámetros sean válidos (nombre no nulo, precio positivo)
2. Aloje memoria para el struct
3. Aloje memoria para la cadena `nombre` y la copie
4. Inicialice todos los campos
5. Retorne `NULL` si alguna asignación falla

Implementar también `void destruir_producto(struct producto_t** ptr_producto)`
que libere toda la memoria y ponga el puntero en `NULL`.



:::{tip} Buena Práctica

Aquí aplica la regla de {ref}`0x3002h`: siempre poner punteros en `NULL` después
de liberar para evitar dangling pointers.

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Inicialización Consistente
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_lizacion_consistente(int val);

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
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
