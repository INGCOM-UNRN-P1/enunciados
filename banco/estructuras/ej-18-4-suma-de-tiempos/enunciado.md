### Ejercicio 18.4 - Suma de Tiempos ⭐⭐☆☆☆

Implementar una función que sume dos `tiempo_t`. El resultado debe ser
normalizado para que los segundos y minutos no excedan 59.

- $S_{total} = t_1.segundos + t_2.segundos$
- $M_{acarreo} = S_{total} / 60$
- $S_{resultado} = S_{total} \% 60$
- $M_{total} = t_1.minutos + t_2.minutos + M_{acarreo}$
- $H_{acarreo} = M_{total} / 60$
- $M_{resultado} = M_{total} \% 60$
- $H_{resultado} = t_1.horas + t_2.horas + H_{acarreo}$
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Implementar encapsulamiento completo manteniendo la
    definición interna oculta en el archivo `.c`.
-   **[*plus ultra*]:** Añadir una función de duplicación profunda (*deep copy*)
    para copiar la estructura de forma segura.

:::
<!-- {hint} Lógica y Consideraciones -->
