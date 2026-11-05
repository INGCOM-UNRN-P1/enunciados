# Generar línea de comandos

# Generar línea de comandos

# Generar línea de comandos

# Generar línea de comandos

# Generar línea de comandos

# Generar línea de comandos

Implementar una función que genere una cadena con las opciones de compilación
correspondientes a los flags activos.



``` c
void generar_comando_compilacion(unsigned int opciones, char *buffer,
                                 size_t tam);
```

Ejemplo: Si `opciones` tiene `OPT_DEBUG | OPT_WARNINGS`, el buffer debe contener
`"-g -Wall"`.

## Contrato

Implementá la API declarada en `ej-20-21-generar-linea-de-comandos.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
