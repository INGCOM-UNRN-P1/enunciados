# Constructores de figuras

Implementar funciones para crear cada tipo de figura de forma segura.



``` c
figura_t crear_circulo(double radio);
figura_t crear_rectangulo(double base, double altura);
figura_t crear_triangulo(double a, double b, double c);
```

## Contrato

Implementá la API declarada en `ej-20-27-constructores-de-figuras.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
