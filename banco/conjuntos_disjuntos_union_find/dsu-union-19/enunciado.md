# Mapeo nombre→índice antes de agrupar

Asigná a cada nombre su primer índice en la lista (`indices[i]`), de modo que nombres repetidos compartan el mismo índice. Después uní los pares por nombre y escribí para cada posición el representante entero de su grupo (`grupos[i]`). Devolvé la cantidad de entradas procesadas o `-1` ante nombres desconocidos/nulos, parámetros inválidos o falta de memoria. Este ejercicio hace explícita la etapa de interning que permite que un DSU de arreglos trabaje con nombres.

```c
int dsu19_mapear_y_agrupar(const char *const nombres[], size_t cantidad, const char *const pares[][2], size_t cantidad_pares, size_t indices[], int grupos[]);
```

Para `Ana,Beto,Ana` y par `Ana-Beto`, los tres elementos quedan asignados al mismo grupo.
