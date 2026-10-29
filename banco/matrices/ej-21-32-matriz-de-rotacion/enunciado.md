### Ejercicio 21.32 - Matriz de rotación ⭐⭐⭐☆☆

Implementar funciones para crear y aplicar matrices de rotación 2D y 3D.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Optimizar el acceso a memoria respetando el orden por
    filas (*row-major order*) para mejorar el uso de caché.
-   **[*plus ultra*]:** Validar que los índices ingresados se encuentren
    estrictamente dentro de los límites del contenedor.

:::
<!-- {hint} Lógica y Consideraciones -->

``` c
double **matriz_rotacion_2d(double angulo);
double **matriz_rotacion_3d_x(double angulo);
double **matriz_rotacion_3d_y(double angulo);
double **matriz_rotacion_3d_z(double angulo);
```
<!-- c -->

**Matriz de rotación 2D:**

$$
R(\theta) = \begin{pmatrix} \cos\theta & -\sin\theta \\ \sin\theta & \cos\theta \end{pmatrix}
$$
