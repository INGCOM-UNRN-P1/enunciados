- **Firma**:
  ```c
  long long arreglo_sumar(const int arreglo[], size_t cantidad);
  ```
- **Descripción**: Calcula y retorna la suma de los elementos del arreglo.
- **Contrato**: Si `arreglo == NULL` o `cantidad == 0`, retorna `0`.


- **Firma**:
  ```c
  int arreglo_buscar(const int arreglo[], size_t cantidad, int buscado);
  ```
- **Descripción**: Localiza el índice de la primera aparición del número
  `buscado`.
- **Contrato**: Retorna el índice en base cero
  ($0 \le \text{índice} < \text{cantidad}$) o `-1` si no existe o ante entradas
  nulas.


- **Firma**:
  ```c
  void arreglo_invertir(int arreglo[], size_t cantidad);
  ```
- **Descripción**: Invierte el orden de los elementos in-place sin memoria
  adicional.
- **Contrato**: Si `arreglo == NULL` o `cantidad <= 1`, no realiza cambios.


- **Firma**:
  ```c
  bool arreglo_ordenado(const int arreglo[], size_t cantidad);
  ```
- **Descripción**: Verifica si los elementos del arreglo se encuentran ordenados
  ascendentemente ($arreglo[i] \le arreglo[i+1]$ para toda posición válida).
- **Contrato**: Retorna `true` si está ordenado ascendentemente o si
  `cantidad <= 1`; retorna `false` si encuentra elementos fuera de orden o si
  `arreglo == NULL`.


- **Firma**:
  ```c
  size_t arreglo_contar(const int arreglo[], size_t cantidad, int buscado);
  ```
- **Descripción**: Cuenta y retorna cuántas veces aparece el número entero
  `buscado` dentro del arreglo.
- **Contrato**: Retorna el total de coincidencias; retorna `0` si
  `arreglo == NULL` o si `cantidad == 0`.


- **Consigna**: Eliminar todas las apariciones de un valor entero dentro de un
  arreglo, compactando los elementos restantes hacia la izquierda sin dejar
  huecos y preservando su orden relativo original. Operación in-place sin
  memoria dinámica.
- **Desafío de diseño**:
  - Definir la firma en `libs/arreglos/arreglos.h` respetando la regla de
    nombres (hasta 12 caracteres, sin abreviaciones).
  - Determinar el tipo de retorno para informar la nueva cantidad de elementos
    válidos (`size_t`).

> [!NOTE] La firma es parte del diseño: es necesario decidir nombre, parámetros
> y tipo de retorno respetando las convenciones de la cátedra.


- **Consigna**: Dados dos arreglos ordenados ascendentemente, fusionar sus
  elementos en un tercer arreglo destino de capacidad finita, manteniéndolo
  ordenado sin desbordar la memoria.
- **Desafío de diseño**:
  - Distinguir parámetros de entrada (`const int primero[]`, `size_t`) de los de
    salida (`int destino[]`, `size_t capacidad`).
  - Retornar la cantidad de elementos volcados en destino.

> [!NOTE] En esta práctica la fusión opera sobre buffers de capacidad fija. En
> TP4 se revisitará este algoritmo usando memoria dinámica (`malloc`), lo que
> permite retornar un arreglo de tamaño exacto sin necesidad de un buffer
> destino externo.

### 📋 Contrato de las Funciones

```c
/*
 * Operación principal de arreglo_sumar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
long long arreglo_sumar(const int arreglo[], size_t cantidad);

/*
 * Operación principal de arreglo_buscar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int arreglo_buscar(const int arreglo[], size_t cantidad, int buscado);

/*
 * Operación principal de arreglo_invertir
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
void arreglo_invertir(int arreglo[], size_t cantidad);

/*
 * Operación principal de arreglo_ordenado
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
bool arreglo_ordenado(const int arreglo[], size_t cantidad);

/*
 * Operación principal de arreglo_contar
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
size_t arreglo_contar(const int arreglo[], size_t cantidad, int buscado);

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
