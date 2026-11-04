## Consigna

### Nivel 1: Problema Conceptual
Un administrador de procesos de un sistema operativo básico debe mantener una lista de identificadores de procesos (PID) actualmente activos. Como la cantidad de procesos cambia constantemente y no puede preverse un límite superior razonable, la estructura debe crecer y encogerse en memoria dinámica según demanda, garantizando inserciones inmediatas y liberación de recursos al terminar cada proceso.

### Nivel 2: Especificación Abstracta del TDA Lista
Se define el tipo abstracto **Lista Simplemente Enlazada Dinámica**:
- **`lista_insertar_inicio`**: Crea un nodo y lo posiciona como primer elemento de la secuencia en tiempo $O(1)$.
- **`lista_eliminar`**: Localiza la primera ocurrencia del valor pedido, lo desacopla de la cadena de punteros y libera el bloque de memoria dinámica asociado. Si el valor no existe en la lista, retorna indicador de falla sin alterar ningún enlace.
- **`lista_destruir`**: Libera secuencialmente cada uno de los nodos alojados en el heap hasta vaciar la lista por completo, dejando el puntero de inicio en `NULL` para prevenir referencias colgantes (*dangling pointers*).

### Nivel 3: Interfaz y Contratos de Funciones
Las funciones públicas del TDA corresponden a las siguientes declaraciones en C:

```c
bool lista_insertar_inicio(nodo_t **cabeza, int valor);
bool lista_eliminar(nodo_t **cabeza, int valor);
void lista_destruir(nodo_t **cabeza);
```

- **`lista_insertar_inicio`**: Reserva memoria con `malloc(sizeof(nodo_t))`. Si la reserva falla, retorna `false`. Si tiene éxito, inicializa el nodo, actualiza `*cabeza` y retorna `true`.
- **`lista_eliminar`**: Recorre la lista buscando `valor`. Si lo encuentra, enlaza el nodo anterior con el siguiente, libera el nodo encontrado con `free` y retorna `true`. Si no lo encuentra o la lista está vacía, retorna `false`.
- **`lista_destruir`**: Itera sobre la lista liberando cada nodo con `free` y finalmente asigna `*cabeza = NULL`.

### Nivel 4: Representación Interna en Memoria y Estado
Cada nodo se define como una estructura autorreferenciada con un valor entero `dato` y un puntero `sig` al siguiente nodo:

```c
typedef struct nodo {
    int dato;
    struct nodo *sig;
} nodo_t;
```

Estado inicial con tres nodos:

```estructura
type: linked_list
variant: singly
values: [50, 30, 10]
addresses: [0x4100, 0x8500, 0x1920]
```

Tras ejecutar `lista_eliminar(&cabeza, 30)`:
- El nodo en `0x8500` es liberado de memoria.
- El campo `sig` del nodo `50` (`0x4100`) apunta directamente a `0x1920`:

```estructura
type: linked_list
variant: singly
values: [50, 10]
addresses: [0x4100, 0x1920]
```

## Criterios de Aceptación

- [ ] `lista_insertar_inicio` asigna memoria dinámica y enlaza correctamente tanto en lista vacía (`*cabeza == NULL`) como no vacía.
- [ ] `lista_eliminar` gestiona correctamente la eliminación del primer nodo, de un nodo intermedio o del último nodo.
- [ ] `lista_eliminar` sobre valor inexistente devuelve `false` y no modifica punteros.
- [ ] `lista_destruir` libera todos los nodos sin dejar fugas de memoria (*leaks*) y deja `*cabeza == NULL`.
