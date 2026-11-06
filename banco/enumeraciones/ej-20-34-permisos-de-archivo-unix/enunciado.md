# Permisos de archivo (UNIX)

Implementá la siguiente interfaz declarada en `ej-20-34-permisos-de-archivo-unix.h`:

```c
enum permiso_unix { OWNER_READ=0400, OWNER_WRITE=0200, OWNER_EXECUTE=0100, GROUP_READ=0040, GROUP_WRITE=0020, GROUP_EXECUTE=0010, OTHER_READ=0004, OTHER_WRITE=0002, OTHER_EXECUTE=0001 };
bool tiene_permiso_unix(unsigned int permisos, enum permiso_unix permiso);
unsigned int agregar_permiso_unix(unsigned int permisos, enum permiso_unix nuevo);
void mostrar_permisos_unix(unsigned int permisos);
```

Los permisos son bits octales UNIX. `tiene_permiso_unix` indica si están todos los bits solicitados; `agregar_permiso_unix` devuelve la unión. `mostrar_permisos_unix` imprime exactamente nueve caracteres (`rwxrwxrwx`, usando `-` por cada bit ausente) y un salto de línea; ignora bits fuera de los nueve permisos.

## Compilación y pruebas

Usá C11 con `-Wall -Wextra -Werror`. Los tests del YAML son parte del contrato.
