### Ejercicio 15.4 - b.4 - Inicialización Consistente ⭐☆☆☆☆

Implementar una función `struct producto_t* crear_producto(const char* nombre,
double precio)` que:
1. Verifique que los parámetros sean válidos (nombre no nulo, precio positivo)
2. Aloje memoria para el struct
3. Aloje memoria para la cadena `nombre` y la copie
4. Inicialice todos los campos
5. Retorne `NULL` si alguna asignación falla

Implementar también `void destruir_producto(struct producto_t** ptr_producto)`
que libere toda la memoria y ponga el puntero en `NULL`.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

:::{tip} Buena Práctica

Aquí aplica la regla de {ref}`0x3002h`: siempre poner punteros en `NULL` después
de liberar para evitar dangling pointers.

:::
<!-- {tip} Buena Práctica -->
