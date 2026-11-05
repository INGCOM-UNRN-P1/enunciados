#### Acrónimo

Implementá `generar_acronimo`, que toma la primera letra de cada palabra de una frase y la escribe en mayúsculas en el búfer de salida. Las palabras están separadas por cualquier espacio en blanco reconocido por `isspace`; los elementos que no comienzan con una letra no aportan una inicial.

```c
int generar_acronimo(const char *frase, char *salida, size_t capacidad);
```

La función devuelve `0` al completar el resultado, incluso si no encontró letras. Devuelve `-1` si algún puntero es nulo, la capacidad es cero o no hay espacio para todas las iniciales y el terminador. Ante falta de espacio, deja `salida` como cadena vacía. La salida siempre termina en `\\0` si el búfer es válido y tiene capacidad positiva.

Ejemplo: la frase `"Universidad Nacional de Rio Negro"` produce `"UNDRN"`.
