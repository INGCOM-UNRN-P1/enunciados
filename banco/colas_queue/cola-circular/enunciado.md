## Consigna

### Nivel 1: Problema Conceptual
Un subsistema de adquisición de datos recibe eventos de telemetría a través de una interrupción de hardware y debe entregarlos al hilo principal de despacho en estricto orden de llegada. Para operar en un entorno de recursos fijos y evitar costosas reubicaciones o desplazamientos de bloques de memoria cada vez que un mensaje es despachado, se debe implementar un búfer circular estático.

### Nivel 2: Especificación Abstracta del TDA Cola
La estructura corresponde al tipo abstracto **Cola Acotada (FIFO: First-In, First-Out)** de capacidad fija `CAPACIDAD = 6` con las siguientes operaciones:
- **`cola_inicializar`**: Deja la estructura en estado coherente inicial (cola vacía).
- **`cola_encolar`**: Inserta un elemento al final. Si la cola está llena, rechaza la operación sin alterar los datos ni los índices.
- **`cola_desencolar`**: Extrae y entrega el elemento del frente. Si la cola está vacía, rechaza la operación.
- **Invariante FIFO**: El primer dato en ingresar es el primero en ser extraído. Los índices avanzan de forma continua recalculándose con aritmética modular respecto de `CAPACIDAD`.

### Nivel 3: Interfaz y Contratos de Funciones
Las funciones a implementar poseen las siguientes firmas en C:

```c
void cola_inicializar(cola_t *cola);
bool cola_encolar(cola_t *cola, int valor);
bool cola_desencolar(cola_t *cola, int *valor);
bool cola_esta_vacia(const cola_t *cola);
bool cola_esta_llena(const cola_t *cola);
```

- **`cola_inicializar`**: Inicializa `frente`, `final` y `cantidad` en cero.
- **`cola_encolar`**: Retorna `false` si `cola_esta_llena` es verdadero. Caso contrario, escribe `valor` en la posición `final`, avanza el índice circularmente (`(final + 1) % CAPACIDAD`), incrementa `cantidad` y retorna `true`.
- **`cola_desencolar`**: Retorna `false` si `cola_esta_vacia` es verdadero. Caso contrario, asigna en `*valor` el dato ubicado en `frente`, avanza el índice circularmente (`(frente + 1) % CAPACIDAD`), decrementa `cantidad` y retorna `true`.

### Nivel 4: Representación Interna en Memoria y Estado
La estructura `cola_t` se almacena en memoria contigua mediante un arreglo de `CAPACIDAD = 6` enteros, dos índices de posición (`frente` y `final`) y un entero `cantidad`.

Estado con elementos `10`, `20`, `30` encolados (`frente = 0`, `final = 3`, `cantidad = 3`):

```estructura
type: queue
variant: circular
capacity: 6
frontIndex: 0
rearIndex: 3
values: [10, 20, 30, "", "", ""]
showPanel: false
```

Tras ejecutar dos operaciones `cola_desencolar(&c, &x)` y luego `cola_encolar(&c, 40)`:
- Salen `10` y `20` (`frente` avanza a `2`).
- Ingresa `40` en índice `3` (`final` avanza a `4`).
- `cantidad` queda en `2`.

## Criterios de Aceptación

- [ ] `cola_encolar` sobre cola llena no sobrescribe elementos existentes y retorna `false`.
- [ ] `cola_desencolar` sobre cola vacía no lee fuera de rango ni decrementa contadores por debajo de cero y retorna `false`.
- [ ] Los índices `frente` y `final` envuelven correctamente al inicio al alcanzar el límite del arreglo (`idx % CAPACIDAD`).
