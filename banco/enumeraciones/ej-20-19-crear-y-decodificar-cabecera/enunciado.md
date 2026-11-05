# Crear y decodificar cabecera

# Crear y decodificar cabecera

# Crear y decodificar cabecera

# Crear y decodificar cabecera

# Crear y decodificar cabecera

# Crear y decodificar cabecera

Implementar funciones para construir y extraer información de la cabecera.



``` c
cabecera_mensaje_t crear_cabecera(enum tipo_mensaje tipo,
                                  unsigned int prioridad,
                                  unsigned int secuencia);
void imprimir_cabecera(cabecera_mensaje_t cabecera);
```

## Contrato

Implementá la API declarada en `ej-20-19-crear-y-decodificar-cabecera.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
