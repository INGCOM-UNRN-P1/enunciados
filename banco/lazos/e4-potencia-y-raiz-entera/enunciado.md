- **Módulo:** `ejercicios/ejercicio6/ejercicio6.h` /
  `ejercicios/ejercicio6/ejercicio6.c`
- **Operaciones a implementar:**
  1. `long long potencia(int base, int exponente);`: Calcula la potencia de la
     base elevada al exponente de forma iterativa para exponentes no negativos.
     Si `exponente` es negativo, retorna `-1`.
  2. `int raiz_cuadrada_entera(int numero);`: Calcula la parte entera de la raíz
     cuadrada sin usar librerías externas. Si `numero` es negativo, retorna
     `-1`.

### 📋 Contrato de las Funciones

```c
/*
 * Calcula la potencia entera de una base elevada a un exponente no negativo.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long potencia(int base, int exponente);

/*
 * Calcula la parte entera de la raíz cuadrada (piso de sqrt(n)) sin usar math.h.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int raiz_cuadrada_entera(int numero);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Salida: Retorno calculado correctamente
```
:::
:::{tab-item} Caso límite
```text
val = 0
Salida: Retorno neutral o código de validación
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las estructuras y enums siguen las reglas de estilo de la cátedra (`0x3004h` con sufijos `_t` y `_e`).
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.
