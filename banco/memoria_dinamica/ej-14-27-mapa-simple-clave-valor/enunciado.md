### Ejercicio 14.27 - Mapa Simple (Clave-Valor) ⭐☆☆☆☆

Implementar una estructura para un mapa simple (diccionario) que almacene pares
clave-valor (`char*`-`int`). El mapa debe usar un arreglo dinámico de `struct
par {char* clave; int valor;}`. La tabla debe crecer usando `realloc` cuando se
quede sin espacio.
:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->
