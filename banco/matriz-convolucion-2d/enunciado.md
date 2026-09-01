# Filtro de Convolución 2D sobre Matrices Dinámicas

## 1. Consigna
Implementar la aplicación de un kernel de convolución de tamaño $3 \times 3$ sobre una matriz bidimensional de enteros de tamaño $F \times C$.

Los bordes deben procesarse con *Zero Padding* (las posiciones virtuales fuera de los límites de la matriz tienen valor 0).

Formato de entrada:
1. Dos enteros: $F$ y $C$ (filas y columnas de la matriz origen).
2. Los $F \times C$ enteros de la matriz.
3. Los 9 enteros del kernel $3 \times 3$.

Salida:
La matriz resultante de la convolución de tamaño $F \times C$ impresa fila por fila separada por espacios.
