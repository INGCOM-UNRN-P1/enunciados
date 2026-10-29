### Ejercicio 26.2 - Devolución de un Arreglo de Cadenas (Tokenizer) ⭐⭐⭐☆☆

Reimplementar el ejercicio de "Tokenización" para que la función devuelva un
`char**` (un arreglo de cadenas terminado en `NULL`) alojado dinámicamente. La
función debe ser `char** dividir_cadena(const char *s, const char
*delimitador)`.

**Lógica y Consideraciones:**
- **Memoria**: La función es responsable de reservar memoria tanto para el
  arreglo de punteros (`char**`) como para cada una de las cadenas (tokens)
  individuales.
- **Liberación**: Se debe crear una función `void liberar_tokens(char **tokens)`
  que recorra el arreglo y libere cada cadena, y finalmente libere el arreglo de
  punteros.


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Validar punteros `NULL` recibidos como parámetro para
    evitar fallos de segmentación.
-   **[*plus ultra*]:** Implementar una versión utilizando aritmética de
    punteros en lugar de indexación directa.

:::
<!-- {hint} Lógica y Consideraciones -->

---

## Punteros a Función

Un puntero a función almacena la dirección de memoria de una función ejecutable.
Permite pasar funciones como argumentos a otras funciones, creando código más
genérico y extensible.
