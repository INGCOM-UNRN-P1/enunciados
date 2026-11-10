# Agrupamiento jerárquico aglomerativo

Cada arista `{a,b,distancia}` es una propuesta de fusión. Procesalas en orden ascendente de distancia con desempate estable por orden de entrada y detenete al llegar a `grupos_objetivo` componentes. Escribí en `umbral` la distancia de la última fusión (`0` si no hace falta fusionar). Devuelve `0` al alcanzar el objetivo y `-1` ante argumentos inválidos, falta de memoria o insuficientes enlaces.

```c
int dsu24_umbral(size_t n, const int aristas[][3], size_t cantidad, size_t grupos_objetivo, int *umbral);
```
