### Ejercicio A.1: Sumatoria de Elementos

- **Firma**:
  ```c
  long long arreglo_sumar(const int arreglo[], size_t cantidad);
  ```
- **Descripción**: Calcula y retorna la suma de los elementos del arreglo.
- **Contrato**: Si `arreglo == NULL` o `cantidad == 0`, retorna `0`.

### Ejercicio A.2: Búsqueda Lineal

- **Firma**:
  ```c
  int arreglo_buscar(const int arreglo[], size_t cantidad, int buscado);
  ```
- **Descripción**: Localiza el índice de la primera aparición del número
  `buscado`.
- **Contrato**: Retorna el índice en base cero
  ($0 \le \text{índice} < \text{cantidad}$) o `-1` si no existe o ante entradas
  nulas.

### Ejercicio A.3: Inversión In-Place

- **Firma**:
  ```c
  void arreglo_invertir(int arreglo[], size_t cantidad);
  ```
- **Descripción**: Invierte el orden de los elementos in-place sin memoria
  adicional.
- **Contrato**: Si `arreglo == NULL` o `cantidad <= 1`, no realiza cambios.

### Ejercicio A.4: Verificación de Orden Ascendente

- **Firma**:
  ```c
  bool arreglo_ordenado(const int arreglo[], size_t cantidad);
  ```
- **Descripción**: Verifica si los elementos del arreglo se encuentran ordenados
  ascendentemente ($arreglo[i] \le arreglo[i+1]$ para toda posición válida).
- **Contrato**: Retorna `true` si está ordenado ascendentemente o si
  `cantidad <= 1`; retorna `false` si encuentra elementos fuera de orden o si
  `arreglo == NULL`.

### Ejercicio A.5: Conteo de Ocurrencias

- **Firma**:
  ```c
  size_t arreglo_contar(const int arreglo[], size_t cantidad, int buscado);
  ```
- **Descripción**: Cuenta y retorna cuántas veces aparece el número entero
  `buscado` dentro del arreglo.
- **Contrato**: Retorna el total de coincidencias; retorna `0` si
  `arreglo == NULL` o si `cantidad == 0`.

### Ejercicio A.6: Compactación In-Place

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

### Ejercicio A.7: Fusión Ordenada (_Merge_)

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
long long arreglo_sumar(const int arreglo[], size_t cantidad);

int arreglo_buscar(const int arreglo[], size_t cantidad, int buscado);

void arreglo_invertir(int arreglo[], size_t cantidad);

bool arreglo_ordenado(const int arreglo[], size_t cantidad);

size_t arreglo_contar(const int arreglo[], size_t cantidad, int buscado);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
