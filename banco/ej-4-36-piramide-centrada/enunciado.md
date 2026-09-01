### Ejercicio 4.36 - Pirámide Centrada ⭐⭐⭐⭐⭐

Dibujá una pirámide centrada de asteriscos.

**Ejemplo (N=5):**

:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Validar que la altura de la pirámide sea un entero positivo.
-   **[*plus ultra*]:** Permitir alternar entre pirámide sólida y con borde.

:::
<!-- {hint} Lógica y Consideraciones -->

```
    *
   ***
  *****
 *******
*********
```

**Orientación:**
- Para cada fila i (de 0 a N-1):
  - Imprimí (N-i-1) espacios
  - Imprimí (2*i+1) asteriscos
  - Nueva línea

---
