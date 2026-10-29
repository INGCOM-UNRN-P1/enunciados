La división entera en C (`/` y `%`) produce dos resultados. El objetivo es
unificar estas operaciones en una única función que retorne una `struct` con el
cociente y el resto, basándose en el algoritmo de la división.

$$dividendo = divisor \times cociente + resto, \quad \text{donde } 0 \le resto < |divisor|$$



``` c
typedef struct
{
    int cociente;
    int resto;
} division_t;
division_t division_lenta(int dividendo, int divisor);
```

---

## Medición de Tiempo

Desarrollar una estructura `tiempo_t` para representar un instante o duración en
horas, minutos y segundos, junto con funciones para manipularla.

``` c
typedef struct
{
    int horas;
    int minutos;
    int segundos;
} tiempo_t;
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Estructura de división
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_tructura_de_division(int val);

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
- Garantizar la terminación con `\0` y prevenir desbordamientos de búfer validando la capacidad máxima.
- Soportar la lectura de cadenas con espacios y múltiples líneas de manera robusta.
:::
