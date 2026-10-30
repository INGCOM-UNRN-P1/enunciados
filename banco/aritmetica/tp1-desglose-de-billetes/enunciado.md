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
/**
 * @brief Determina si un monto solicitado es admisible para su retiro.
 *
 * Un monto es válido si es estrictamente positivo y múltiplo de la
 * denominación mínima de billete disponible en el cajero ($100).
 *
 * @param monto Monto solicitado a retirar.
 * @return bool true si el monto es mayor a cero y múltiplo de 100,
 *         false en caso contrario.
 */
bool es_monto_valido(int monto);

/**
 * @brief Calcula la cantidad de billetes de una denominación dada.
 *
 * Realiza la división entera entre el monto disponible y la denominación
 * del billete correspondiente.
 *
 * @param monto Monto remanente a descomponer.
 * @param denominacion Valor nominal del billete a evaluar.
 * @return int Cantidad entera de billetes de esa denominación.
 */
int calcular_cantidad_billetes(int monto, int denominacion);

/**
 * @brief Calcula el remanente de monto tras descontar billetes.
 *
 * Obtiene el residuo de la división entera entre el monto y la denominación
 * indicada.
 *
 * @param monto Monto actual antes de descontar los billetes.
 * @param denominacion Valor nominal del billete evaluado.
 * @return int Monto remanente tras descontar los billetes posibles.
 */
int calcular_resto_monto(int monto, int denominacion);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
