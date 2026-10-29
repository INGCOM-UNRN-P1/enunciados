Para demostrar en la práctica que la interfaz independiza al cliente de la representación en memoria, se implementan dos variantes para un mismo archivo de cabecera `tiempo.h`.


- **Constructor:** `tiempo_t *tiempo_crear(unsigned int horas, unsigned int minutos, unsigned int segundos);` (admite excesos y los normaliza).
- **Destructor:** `void tiempo_destruir(tiempo_t *t);`
- **Selectores:**
  - `unsigned int tiempo_horas(const tiempo_t *t);`
  - `unsigned int tiempo_minutos(const tiempo_t *t);` (garantizado en $[0, 59]$).
  - `unsigned int tiempo_segundos(const tiempo_t *t);` (garantizado en $[0, 59]$).
- **Consultor:**
  - `unsigned long tiempo_en_segundos(const tiempo_t *t);`
- **Mutador:**
  - `void tiempo_incrementar(tiempo_t *t, unsigned int segundos_extra);`


1. **Implementación A (`tiempo_hms.c`):** Estructura desglosada en campos `horas`, `minutos` y `segundos`. Invariante: `t != NULL && t->minutos < 60 && t->segundos < 60`.
2. **Implementación B (`tiempo_seg.c`):** Estructura compacta almacenando únicamente `unsigned long seg_totales`. Invariante: `t != NULL`. Los selectores calculan su valor al vuelo con `/` y `%`.

### 📋 Contrato de las Funciones

```c
/*
 * Constructor con normalización de excesos.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
tiempo_t * tiempo_crear(unsigned int horas, unsigned int minutos, unsigned int segundos);

/*
 * Destructor tolerante a NULL.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void tiempo_destruir(tiempo_t *t);

/*
 * Selector de cantidad de horas.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
unsigned int tiempo_horas(const tiempo_t *t);

/*
 * Selector de cantidad de minutos en rango [0, 59].
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
unsigned int tiempo_minutos(const tiempo_t *t);

/*
 * Selector de cantidad de segundos en rango [0, 59].
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
unsigned int tiempo_segundos(const tiempo_t *t);

/*
 * Consultor de tiempo total acumulado en segundos.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
unsigned long tiempo_en_segundos(const tiempo_t *t);

/*
 * Mutador que suma segundos extra y renormaliza.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void tiempo_incrementar(tiempo_t *t, unsigned int segundos_extra);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Operación típica
```text
ADD 10, ADD 20
Estructura con 2 elementos
```
:::
:::{tab-item} Colección vacía
```text
Consulta sobre estructura recién inicializada
Retorno seguro / estado vacío
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
3. **Gestión de memoria:** Toda memoria solicitada mediante `malloc`/`calloc` debe ser validada y eventualmente liberada con `free`.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- En tiempo_crear, normalizá excesos acumulando segundos hacia minutos y minutos hacia horas.
- Los selectores de minutos y segundos deben garantizar valores en el rango [0, 59].
- Para la implementación compacta tiempo_seg.c, calculá las componentes con división entera y módulo al vuelo.
- En tiempo_destruir, asegurate de tolerar punteros NULL sin fallar.
:::
