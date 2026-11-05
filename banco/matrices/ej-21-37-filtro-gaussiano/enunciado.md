Suavice la imagen in situ con un núcleo gaussiano 3×3 normalizado, de desvío sigma positivo. Para vecinos fuera de la imagen, repita el píxel del borde más cercano. Calcule cada resultado usando la imagen original. Ante parámetros inválidos o falta de memoria, no modifique la imagen.

```c
void filtro_gaussiano(double **imagen, int filas, int cols, double sigma);
```
