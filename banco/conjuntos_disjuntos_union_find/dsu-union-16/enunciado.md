# Islas en matriz binaria

Contá las regiones de unos conectadas por vecindad ortogonal (arriba, abajo, izquierda, derecha). La matriz admite hasta 100×100 y contiene solo 0 y 1. Devolvé `-1` ante dimensiones o valores inválidos, o falta de memoria.

```c
int dsu16_contar_islas(size_t filas, size_t columnas, const int matriz[][100]);
```

La matriz `{{1,0,1},{1,0,0},{0,1,1}}` contiene tres islas.
