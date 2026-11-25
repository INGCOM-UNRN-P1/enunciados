# Árbol de expresión aritmética

Los nodos hoja contienen números y los internos uno de +, -, * o /. Devuelve false si el árbol no representa una expresión válida o hay división por cero.

```{dibu}
:caption: Árbol de la expresión `(3 + 4) * (5 - 2)`: cada operador se aplica al resultado de evaluar sus dos subárboles, en postorden; el resultado es `21`.
type: tree
values: ["*", "+", "-", 3, 4, 5, 2]
```

```c
bool evaluar_expresion_21(const nodo_expr_21_t *raiz, double *resultado);
```

El contrato reemplaza el antiguo flujo `val`, que no describía ni implementaba la operación del ejercicio.
