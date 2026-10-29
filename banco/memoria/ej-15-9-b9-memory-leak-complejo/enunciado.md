### Ejercicio 15.9 - b.9 - Memory Leak Complejo ⭐⭐⭐⭐☆

Crear un programa con un leak no trivial:


:::{hint} Lógica y Consideraciones

-   **[*plus ultra*]:** Verificar el retorno de asignación de memoria y
    garantizar la liberación total de recursos en caso de error.
-   **[*plus ultra*]:** Verificar la ausencia de fugas de memoria (*memory
    leaks*) mediante Valgrind o AddressSanitizer.

:::
<!-- {hint} Lógica y Consideraciones -->

```{code-block} c
:linenos:
struct nodo_t
{
    int dato;
    struct nodo_t *siguiente;
};
void agregar_nodo(struct nodo_t **cabeza, int valor)
{
    struct nodo_t *nuevo = malloc(sizeof(struct nodo_t));
    nuevo->dato = valor;
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}
int main()
{
    struct nodo_t *lista = NULL;
    for (int i = 0; i < 100; i++)
    {
        agregar_nodo(&lista, i);
    }
    // FALTA: liberar todos los nodos
    return 0;
}
```
<!-- {code-block} c -->

Detectar con Valgrind el leak de 100 nodos. Luego implementar una función
`liberar_lista` que corrija el problema.
