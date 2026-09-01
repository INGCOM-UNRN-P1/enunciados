### Ejercicio 32.4 - Nombres que Reflejan Comportamiento ⭐⭐☆☆☆

Renombrar estas funciones para reflejar mejor su comportamiento real:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
// La función busca y reemplaza, no solo busca
char *buscar_texto(char *str, const char *patron, const char *reemplazo);
// La función no solo valida, también normaliza
bool validar_email(char *email);
// La función no solo obtiene, calcula en tiempo real
double obtener_promedio(const int *calificaciones, size_t n);
// La función no agrega, inserta ordenadamente
void agregar_elemento(lista_t *lista, int elemento);
```
<!-- {code-block} c -->

---

## Tipos Opacos y Encapsulamiento
