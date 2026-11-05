# Funciones de conversión genéricas

Implementar funciones genéricas que usen la tabla para realizar conversiones.



``` c
const char *enum_a_string(int valor, const enum_string_t *tabla, size_t tam);
int string_a_enum(const char *nombre, const enum_string_t *tabla, size_t tam,
                  int valor_defecto);
```

## Contrato

Implementá la API declarada en `ej-20-29-funciones-de-conversion-generi.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
