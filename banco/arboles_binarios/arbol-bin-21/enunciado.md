# Árbol de expresión aritmética

Los nodos hoja contienen números y los internos uno de +, -, * o /. Devuelve false si el árbol no representa una expresión válida o hay división por cero.

```c
bool evaluar_expresion_21(const nodo_expr_21_t *raiz, double *resultado);
```

El contrato reemplaza el antiguo flujo `val`, que no describía ni implementaba la operación del ejercicio.
