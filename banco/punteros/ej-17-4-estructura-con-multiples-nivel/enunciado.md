Implementar constructor y destructor para esta estructura anidada:



```{code-block} c
:linenos:
typedef struct
{
    char *calle;
    char *ciudad;
    int codigo_postal;
} direccion_t;
typedef struct
{
    char *nombre;
    direccion_t *direccion;
    char **telefonos; // Array de cadenas
    size_t n_telefonos;
} contacto_t;
contacto_t *contacto_crear(const char *nombre, const char *calle,
                           const char *ciudad, int codigo_postal);
void contacto_destruir(contacto_t **ptr_contacto);
```

**Desafío:** Manejar correctamente tres niveles de asignación: la estructura
principal, la dirección anidada, y el array dinámico de cadenas.

---

## Manejo de Errores en Cadena

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Estructura con Múltiples Niveles
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__con_multiples_nivel(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
