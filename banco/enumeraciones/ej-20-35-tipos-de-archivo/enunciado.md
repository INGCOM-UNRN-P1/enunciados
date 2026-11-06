# Tipos de archivo

Implementá la siguiente interfaz declarada en `ej-20-35-tipos-de-archivo.h`:

```c
enum tipo_archivo { TIPO_REGULAR, TIPO_DIRECTORIO, TIPO_ENLACE_SIMBOLICO, TIPO_ENLACE_DURO, TIPO_DISPOSITIVO, TIPO_PIPE, TIPO_SOCKET };
typedef struct { char nombre[256]; enum tipo_archivo tipo; size_t tamanio; unsigned int permisos; } archivo_info_t;
const char *tipo_archivo_a_string(enum tipo_archivo tipo);
bool archivo_info_valida(const archivo_info_t *archivo);
```

`tipo_archivo_a_string` devuelve el nombre corto del tipo (`regular`, `directorio`, `enlace_simbolico`, `enlace_duro`, `dispositivo`, `pipe`, `socket`) o `desconocido` para valores inválidos. `archivo_info_valida` exige puntero no nulo, nombre no vacío terminado en NUL dentro del arreglo, tipo enumerado válido y permisos limitados a `0777`.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
