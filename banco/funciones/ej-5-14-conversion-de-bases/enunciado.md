# Conversión de Bases

## Ejercicio 5.14 - Conversión de Bases ⭐⭐⭐⭐☆

Implementá conversiones entre bases numéricas:
- `int binario_a_decimal(long binario)`
- `long decimal_a_binario(int decimal)`
- Similar para octal y hexadecimal

**Orientación:**
- Para convertir a decimal: suma potencias de la base
- Para convertir desde decimal: divisiones sucesivas
- Validá que los dígitos sean válidos para la base


:::{hint} Lógica y Consideraciones
    errores de E/S con `ferror` y `feof`.
    archivo en todos los caminos de ejecución.

-   **[*plus ultra*]:** Validar que los dígitos de la cadena binaria sean exclusivamente 0 o 1.
-   **[*plus ultra*]:** Escribir pruebas con assert() verificando conversiones de ida y vuelta (round-trip).

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_15)=