### Ejercicio 15.19 - b.19 - Script de Análisis con Valgrind ⭐⭐☆☆☆

Crear un Makefile que incluya targets para análisis automático:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar la correcta apertura del archivo y controlar
    errores de E/S con `ferror` y `feof`.
-   **[*plus ultra*]:** Soportar rutas complejas y asegurar el cierre del
    archivo en todos los caminos de ejecución.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} makefile
:linenos:
.PHONY: valgrind
valgrind: programa
	valgrind --leak-check=full \
	         --show-leak-kinds=all \
	         --track-origins=yes \
	         --verbose \
	         ./programa

.PHONY: asan
asan:
	$(CC) -fsanitize=address -g -o programa programa.c
	./programa

```
<!-- {code-block} makefile -->
