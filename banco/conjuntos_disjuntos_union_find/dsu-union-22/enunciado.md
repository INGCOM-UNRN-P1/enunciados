# DSU persistente con versiones

Cada fila `{version_base,tipo,a,b}` crea una versión nueva que se puede usar en operaciones posteriores. Tipo `0` une `a` y `b`; tipo `1` consulta si ya están conectados. Una consulta también crea una versión idéntica a la base. Guardá respuestas en `resultados[i]`. La versión inicial es 0 y la operación `i` crea la versión `i+1`. Devolvé `cantidad` o `-1` ante índices/versiones inválidos o falta de memoria. Para mantener el contrato simple, se limita a 2000 nodos y 2000 operaciones; cada versión copia los arreglos completos (`O(nq)`).

```c
int dsu22_procesar(size_t n, const int operaciones[][4], size_t cantidad, int resultados[]);
```
