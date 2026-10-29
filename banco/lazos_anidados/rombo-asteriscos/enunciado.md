**Dificultad:** ⭐⭐⭐⭐⭐

Escribir un programa que dibuje por consola un rombo formado por caracteres asterisco (`*`) a partir de una dimensión o ancho máximo ingresado por el usuario.

## Entrada
Un número entero impar $N$ que representa el ancho máximo (o número de filas/columnas centrales del rombo).

## Salida
El patrón geométrico del rombo dibujado con espacios y asteriscos.

### Ejemplo
- **Entrada:** `5`
- **Salida:**
  ```text
    *
   ***
  *****
   ***
    *
  ```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Rombo de Asteriscos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_rombo_asteriscos(int val);

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
- Dividí la figura en triángulo superior creciente y triángulo inferior decreciente.
- Para cada fila, calculá la cantidad de espacios (ancho - fila) / 2 y la cantidad de asteriscos.
:::
