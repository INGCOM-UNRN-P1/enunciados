Implementá un programa interactivo en C para un juego de adivinanza. La computadora elige un número pseudoaleatorio entre 1 y 100, y el usuario dispone de hasta 7 intentos para descubrirlo.

En cada turno, el usuario ingresa un número y el programa responde indicando si el número ingresado es "muy alto" o "muy bajo" respecto al objetivo. Si el usuario acierta, el juego termina inmediatamente felicitándolo y mostrando la cantidad de intentos utilizados. Si se agotan los intentos sin éxito, se revela el número secreto.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Juego de Adivinanza Mejorado.
 * Precondiciones: val representa el parámetro de entrada del flujo o intentos máximos.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__adivinanza_mejorado(int val);
```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Partida estándar
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Entrada nula o negativa
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles (números entre 1 y 100) antes de operar.
2. **Entrada inválida o caracteres:** Gestionar entradas no numéricas limpiando el buffer de entrada para prevenir bucles infinitos en `scanf`.
3. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con valores <= 0 retornando control de forma segura.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Usar `rand() % 100 + 1` para la generación del número aleatorio.
- Controlar la cantidad de intentos restantes en un lazo `while` o `for`.
- Proveer pistas claras ("muy alto", "muy bajo") tras cada intento fallido.
:::
