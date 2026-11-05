# Comparar archivos

Implementá `int comparar_archivos(const char *ruta_a, const char *ruta_b)` y un
programa que reciba ambas rutas como argumentos. La comparación debe considerar
todos los bytes, incluso bytes nulos.

La función devuelve `0` si los archivos son idénticos, `1` si difieren y `-1` si
alguna ruta no es válida o hay un error al abrir, leer o cerrar. El programa
reporta si son idénticos o distintos y termina con error ante el retorno `-1`.
La primera posición distinta puede reportarse como extensión opcional.
