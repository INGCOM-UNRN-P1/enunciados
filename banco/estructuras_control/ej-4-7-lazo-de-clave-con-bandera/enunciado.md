:::{exercise}
:label: lazo_flag_break
:enumerator: continue
Reescribí el ingreso de clave de acceso del Ejercicio 5.4 utilizando un lazo
controlado por una bandera booleana (`bool`) en lugar de `do...while`.
    definición interna oculta en el archivo `.c`.
    para copiar la estructura de forma segura.

-   **[*plus ultra*]:** Usar una variable bool con nombre representativo (ej. clave_correcta).
-   **[*plus ultra*]:** Manejar intentos máximos permitidos en la condición del lazo.

:::

:::{solution} lazo_flag_break
:label: solucion-lazo_flag_break
:class: dropdown
```{code-block} c
:linenos:
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    bool clave_correcta_ingresada = false;
    while (clave_correcta_ingresada == false)
    {
        printf("Ingrese la clave de acceso: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave == clave_correcta)
        {
            printf("Acceso concedido.\n");
            clave_correcta_ingresada =
                true; // Se modifica el estado de la bandera
        }
        else
        {
            printf("Clave incorrecta. Intente nuevamente.\n");
        }
    }
    return 0;
}
```

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Lazo de clave con bandera
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_de_clave_con_bandera(int val);

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
- [ ] No se registran fugas de memoria (*memory leaks*) comprobables mediante Valgrind o AddressSanitizer.

:::{hint} Consideraciones Didácticas
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::
