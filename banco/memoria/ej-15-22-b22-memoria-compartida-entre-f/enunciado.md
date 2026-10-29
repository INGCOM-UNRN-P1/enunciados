Implementar un patrón donde una función asigna memoria y otra la libera,
documentando claramente la responsabilidad:



```{code-block} c
:linenos:
// El llamador es responsable de liberar la memoria retornada
char *construir_mensaje(const char *usuario)
{
    size_t len = strlen("Hola, ") + strlen(usuario) + 2;
    char *msg = malloc(len);
    if (msg == NULL)
    {
        return NULL;
    }
    snprintf(msg, len, "Hola, %s", usuario);
    return msg;
}
int main()
{
    char *mensaje = construir_mensaje("Alumno");
    if (mensaje != NULL)
    {
        printf("%s\n", mensaje);
        free(mensaje); // ¡El main debe liberar!
    }
    return 0;
}
```

:::{note} Convención de Propiedad

Documentá claramente quién es responsable de liberar cada bloque de memoria. Usá
comentarios como "Caller must free" o "Takes ownership".

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Memoria Compartida entre Funciones
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_a_compartida_entre_f(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Verificar el retorno de asignación de memoria y garantizar la liberación total de recursos en caso de error.
- Verificar la ausencia de fugas de memoria (*memory leaks*) mediante Valgrind o AddressSanitizer.
:::
