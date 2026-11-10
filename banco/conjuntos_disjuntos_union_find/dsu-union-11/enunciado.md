# Conectividad dinámica en redes

Procesá las operaciones en orden. Cada fila es `{tipo,u,v}`: `tipo=0` agrega una conexión permanente; `tipo=1` consulta si `u` y `v` están conectados. Guardá el resultado de cada fila en `resultados[i]` (las uniones producen cero). Los vértices son `0..n-1`. Devolvé `cantidad` o `-1` si los datos son inválidos o no se puede reservar memoria.

```c
int dsu11_procesar(size_t n, const int operaciones[][3], size_t cantidad, int resultados[]);
```

Ejemplo: unir `0-1`, consultar `0-2`, unir `1-2`, consultar `0-2` produce resultados `0,0,0,1`.
