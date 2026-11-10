# DSU con distancias al representante

Cada restricción `{a,b,d}` afirma que `potencial[b] - potencial[a] == d`. Si son consistentes, escribí en `potenciales[i]` la diferencia entre el nodo `i` y el representante de su componente y devolvé `1`. Si hay contradicción, devolvé `0`; ante índices inválidos, falta de memoria o un potencial final fuera del rango de `int`, `-1`. Los vértices son `0..n-1`.

```c
int dsu13_resolver(size_t n, const int restricciones[][3], size_t cantidad, int potenciales[]);
```

Ejemplo: `0→1=4`, `1→2=3` es consistente; agregar `0→2=8` contradice el sistema.
