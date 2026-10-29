:::{exercise}
:label: lazo_repeat
:enumerator: for
Diseñá un programa con un lazo `do...while` que solicite repetidamente una clave
de acceso numérica al usuario hasta que ingrese el valor correcto `1234`.
    valores fuera de rango o tipos inválidos.
    un lazo hasta que el usuario elija finalizar.

-   **[*plus ultra*]:** Limitar el número máximo de intentos fallidos antes de terminar.
-   **[*plus ultra*]:** Informar cuántos intentos quedan disponibles en cada iteración.

:::

:::{solution} lazo_repeat
:label: solucion-lazo_repeat
:class: dropdown
```{code-block} c
:linenos:
#include <stdio.h>
int main(void)
{
    int clave = 0;
    int clave_correcta = 1234;
    do
    {
        printf("Ingrese la clave: ");
        if (scanf("%d", &clave) != 1)
        {
            printf("Error al leer la clave.\n");
            return 1;
        }
        if (clave != clave_correcta)
        {
            printf("Clave incorrecta. Reintente.\n");
        }
    } while (clave != clave_correcta);
    printf("Acceso concedido.\n");
    return 0;
}
```

:::

---

## Control de Flujo Seguro

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Clave de acceso con do-while
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__acceso_con_do_while(int val);

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
