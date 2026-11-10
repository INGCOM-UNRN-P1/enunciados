# Equivalencia de clases

Los pares de `relaciones` declaran elementos equivalentes. Calculá la clausura reflexiva, simétrica y transitiva de esas declaraciones y contestá cada par de `consultas` con `1` si pertenece a la misma clase y `0` si no. Los elementos se numeran `0..n-1`. Devolvé la cantidad de consultas respondidas o `-1` ante índices inválidos o falta de memoria.

```c
int dsu23_consultar(size_t n, const int relaciones[][2], size_t cantidad_relaciones, const int consultas[][2], size_t cantidad_consultas, int resultados[]);
```
