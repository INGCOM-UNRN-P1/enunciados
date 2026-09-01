### Ejercicio 17.2 - Destrucción de Persona ⭐⭐☆☆☆

Implementar el destructor correspondiente:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
void persona_destruir(persona_t **ptr_persona);
```
<!-- c -->

**Requisitos:**
- Liberar en el orden correcto (de adentro hacia afuera).
- Verificar que el puntero no sea `NULL`.
- Poner el puntero en `NULL` después de liberar.
- Manejar correctamente el doble puntero.
