Aplicá un filtro de media móvil a una secuencia de muestras enteras. Para cada
ventana completa de `ventana` muestras consecutivas, calculá su promedio. No
generes valores para ventanas parciales en los bordes.

```c
int media_movil(const int *muestras, int n, int ventana, double *salida);
```

`muestras` contiene `n` enteros y `salida` tiene espacio para al menos
`n - ventana + 1` valores; los arreglos no se superponen. Devolvé la cantidad
de promedios escritos. Si alguno de los punteros es nulo, `n` o `ventana` no
es positivo, o `ventana > n`, devolvé -1 sin modificar la salida.

Por ejemplo, para `{1, 2, 6, -1}` y ventana 2, la salida es
`{1.5, 4.0, 2.5}` y el retorno es 3.

:::{hint} Ayuda
Sumá las muestras de cada ventana y dividí por su tamaño usando aritmética
de punto flotante.
:::
