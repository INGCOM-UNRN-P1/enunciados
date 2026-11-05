# Funciones Matemáticas Básicas

## Ejercicio 5.6 - Funciones Matemáticas Básicas ⭐☆☆☆☆

Implementá las funciones declaradas en el encabezado:

```c
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
double dividir(double a, double b);
```

**Orientación:**
- Cada función recibe dos `double` y retorna el resultado
- `dividir` retorna `NAN` (de `<math.h>`) cuando el divisor es cero; en otro
  caso retorna el cociente.
- En `main`, usá las funciones en una calculadora simple


:::{hint} Lógica y Consideraciones
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Manejar la división por cero retornando un código de error o valor centinela.
-   **[*plus ultra*]:** Diseñar una suite de pruebas con assert() para cada una de las operaciones básicas.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_7)=

Para la calculadora, leé dos números separados por un operador (`+`, `-`, `*`
o `/`), por ejemplo `7 / 2`. Mostrá el resultado con dos decimales. Si el
divisor es cero, mostrá `División por cero`; si el operador no es válido,
mostrá `Operación inválida`. Terminá cada resultado con un salto de línea.
