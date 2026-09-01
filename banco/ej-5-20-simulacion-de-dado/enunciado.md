# Simulación de Dado

## Ejercicio 5.20 - Simulación de Dado ⭐⭐⭐⭐☆

Creá un simulador de lanzamiento de dados:
- `int lanzar_dado(int caras)` - retorna 1 a caras
- `void lanzar_multiples(int cantidad, int caras, int resultados[])`
- `void estadisticas_lanzamientos(int resultados[], int n)`

**Orientación:**
- Usá `rand() % caras + 1`
- Inicializá semilla con `srand(time(NULL))` una sola vez
- Estadísticas: muestra frecuencia de cada número


:::{hint} Lógica y Consideraciones
    desbordamientos de búfer validando la capacidad máxima.
    líneas de manera robusta.

-   **[*plus ultra*]:** Modularizar el cálculo de frecuencias en una función independiente.
-   **[*plus ultra*]:** Escribir pruebas unitarias verificando que los valores generados estén en el rango [1, caras].

:::
<!-- {hint} Lógica y Consideraciones -->

---
(ejercicio_5_21)=