Desglose óptimo de billetes de cajero automático (denominaciones de $20.000,
$10.000, $5.000, $2.000, $1.000, $500, $200 y $100).

- `cajero.h` / `cajero.c`: Funciones a implementar:
  - `es_monto_valido(int monto)`: retorna `true` si `monto > 0` y es múltiplo
    de 100.
  - `calcular_cantidad_billetes(int monto, int denominacion)`: retorna cuántos
    billetes de esa denominación entran en el monto.
  - `calcular_resto_monto(int monto, int denominacion)`: retorna el residuo
    después de usar billetes de esa denominación.
- `main.c`: Solicita el monto a retirar con `leer_entero`, valida que sea
  estrictamente positivo y múltiplo de la denominación mínima ($100), e imprime
  el desglose en cantidad de billetes por cada valor facial.

### 📋 Contrato de las Funciones

```c
/*
 * Determina si un monto solicitado es admisible para su retiro.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool es_monto_valido(int monto);

/*
 * Calcula la cantidad de billetes de una denominación dada.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_cantidad_billetes(int monto, int denominacion);

/*
 * Calcula el remanente de monto tras descontar billetes.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int calcular_resto_monto(int monto, int denominacion);

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

:::{hint} Consideraciones Didácticas
- Para determinar cuántos billetes de un valor facial entregar, usá la división entera monto / denominacion.
- Para calcular el saldo remanente a cubrir con denominaciones menores, usá el operador residuo monto % denominacion.
- Recorré las denominaciones en orden estrictamente descendente: 20000, 10000, 5000, 2000, 1000, 500, 200 y 100.
:::
