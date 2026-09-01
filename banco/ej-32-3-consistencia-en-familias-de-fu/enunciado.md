### Ejercicio 32.3 - Consistencia en Familias de Funciones ⭐⭐☆☆☆

Completar estas familias de funciones con nombres consistentes:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
// Familia de funciones para manejo de archivos de configuración
config_t *config_crear_vacio(void);
config_t *config_ ? ? ? _desde_archivo(const char *ruta); // Cargar
bool config_ ? ?
               ? _a_archivo(const config_t *cfg, const char *ruta); // Guardar
? ?   ?   // Obtener valor de clave
    ? ? ? // Establecer valor de clave
    ? ? ? // Verificar si existe una clave
    void config_destruir(config_t **ptr_config);
```
<!-- {code-block} c -->
