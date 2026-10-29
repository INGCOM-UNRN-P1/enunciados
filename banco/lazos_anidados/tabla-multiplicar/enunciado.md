**Dificultad:** ⭐⭐⭐⭐☆

Escribir un programa que muestre por pantalla la tabla de multiplicar pitagórica completa del 1 al 10 (las 10 tablas organizadas en filas y columnas).

## Entrada
No requiere entrada por teclado.

## Salida
Tabla de multiplicar estructurada del $1 \times 1$ al $10 \times 10$.

### Ejemplo
- **Salida:** Matriz de productos con valores del 1 al 100.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Tabla de Multiplicar Completa
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_tabla_multiplicar(int val);

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
- Usá dos lazos for anidados para iterar filas (1..10) y columnas (1..10).
- Alineá las columnas usando el especificador de formato %4d en printf.
:::
