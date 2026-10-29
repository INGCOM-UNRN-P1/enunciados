# Cálculo de Potencia

## Ejercicio 5.15 - Cálculo de Potencia ⭐⭐⭐⭐☆

Implementá dos versiones de cálculo de potencia:
- `double potencia_iterativa(double base, int exp)`: calculada mediante multiplicaciones sucesivas.
- `double potencia_rapida(double base, int exp)`: calculada mediante exponenciación binaria (reduciendo a la mitad el exponente en cada paso).
- Manejá exponentes negativos retornando `1.0 / potencia(base, -exp)`.

**Orientación:**
- Simple: multiplica base n veces
- Rápida: si exp es par, `pow(base, exp) = pow(base*base, exp/2)`
- Exponente negativo: `pow(base, -n) = 1 / pow(base, n)`


:::{hint} Lógica y Consideraciones
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Verificar que la versión iterativa y la rápida retornen el mismo resultado dentro de una tolerancia con assert.
-   **[*plus ultra*]:** Manejar el caso especial base=0 y exp=0.

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_16)=