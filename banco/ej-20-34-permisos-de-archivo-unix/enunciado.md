### Ejercicio 20.34 - Permisos de archivo (UNIX) ⭐⭐☆☆☆

Modelar permisos de archivo estilo UNIX usando flags.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
enum permiso_unix
{
    OWNER_READ = 0400, // 0100000000 en octal
    OWNER_WRITE = 0200,
    OWNER_EXECUTE = 0100,
    GROUP_READ = 0040,
    GROUP_WRITE = 0020,
    GROUP_EXECUTE = 0010,
    OTHER_READ = 0004,
    OTHER_WRITE = 0002,
    OTHER_EXECUTE = 0001
};
```
<!-- {code-block} c -->

Implementar funciones para manipular permisos:

``` c
bool tiene_permiso_unix(unsigned int permisos, enum permiso_unix permiso);
unsigned int agregar_permiso_unix(unsigned int permisos,
                                  enum permiso_unix nuevo);
void mostrar_permisos_unix(unsigned int permisos); // Formato: rwxr-xr--
```
<!-- c -->
