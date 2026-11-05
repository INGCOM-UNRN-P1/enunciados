Calcule el Laplaciano discreto de cuatro vecinos: arriba + abajo + izquierda + derecha − 4×centro. Para vecinos fuera de la imagen, repita el píxel del borde más cercano. Escriba el resultado en la matriz provista, saturando al rango de int. La salida puede compartir filas con la entrada. Parámetros inválidos o falta de memoria no modifican la salida.

```c
void detectar_bordes_laplaciano(int **imagen, int filas, int cols, int **resultado);
```
