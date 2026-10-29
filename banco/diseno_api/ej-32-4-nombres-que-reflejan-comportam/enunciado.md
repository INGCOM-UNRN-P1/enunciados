Renombrar estas funciones para reflejar mejor su comportamiento real:



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

---

## Tipos Opacos y Encapsulamiento

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Nombres que Reflejan Comportamiento
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_reflejan_comportam(int val);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
