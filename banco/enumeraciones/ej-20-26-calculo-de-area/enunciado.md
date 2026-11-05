# Cálculo de área

Implementar una función que calcule el área de cualquier figura usando su tipo y
datos.



``` c
double calcular_area(const figura_t *figura);
```

**Fórmulas:**
- Círculo: $A = \pi r^2$
- Rectángulo: $A = base \times altura$
- Triángulo (Fórmula de Herón):
  - $s = \frac{a+b+c}{2}$
  - $A = \sqrt{s(s-a)(s-b)(s-c)}$

## Contrato

Implementá la API declarada en `ej-20-26-calculo-de-area.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
