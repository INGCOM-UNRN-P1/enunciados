Se desea modelar un Tipo de Dato Abstracto para operar con números racionales exactos $\left(\frac{\text{numerador}}{\text{denominador}}\right)$.


En `fraccion.c`, una fracción válida debe cumplir siempre las siguientes condiciones en su función `static bool fraccion_invariante(const fraccion_t *f)`:

1. El puntero `f` no es `NULL`.
2. El denominador es estrictamente mayor que cero ($\text{denominador} > 0$). Si la fracción es negativa, el signo debe residir únicamente en el numerador.
3. La fracción se encuentra simplificada a su mínima expresión (irreductible): el Máximo Común Divisor entre $|\text{numerador}|$ y $\text{denominador}$ es $1$. Si el numerador es $0$, el denominador debe ser obligatoriamente $1$.


- **Constructor:** `fraccion_t *fraccion_crear(int numerador, int denominador);` (retorna `NULL` si `denominador == 0` o si falla memoria; simplifica y normaliza signo).
- **Destructor:** `void fraccion_destruir(fraccion_t *f);` (libera en heap, tolera `NULL`).
- **Selectores:**
  - `int fraccion_numerador(const fraccion_t *f);`
  - `int fraccion_denominador(const fraccion_t *f);`
- **Consultores:**
  - `bool fraccion_es_entera(const fraccion_t *f);`
  - `int fraccion_comparar(const fraccion_t *f1, const fraccion_t *f2);`
- **Operaciones:**
  - `fraccion_t *fraccion_sumar(const fraccion_t *f1, const fraccion_t *f2);`
  - `fraccion_t *fraccion_multiplicar(const fraccion_t *f1, const fraccion_t *f2);`
- **Conversores:**
  - `double fraccion_a_real(const fraccion_t *f);`
  - `char *fraccion_a_cadena(const fraccion_t *f);` (debe liberarse con `free()`).

### 📋 Contrato de las Funciones

```c
/*
 * Constructor con normalización de signo y simplificación por MCD.
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
fraccion_t * fraccion_crear(int numerador, int denominador);

/*
 * Destructor tolerante a NULL.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void fraccion_destruir(fraccion_t *f);

/*
 * Selector de numerador.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int fraccion_numerador(const fraccion_t *f);

/*
 * Selector de denominador positivo.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int fraccion_denominador(const fraccion_t *f);

/*
 * Retorna true si denominador es 1.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
bool fraccion_es_entera(const fraccion_t *f);

/*
 * Comparación por producto cruzado (< 0, 0, > 0).
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
int fraccion_comparar(const fraccion_t *f1, const fraccion_t *f2);

/*
 * Suma exacta simplificada.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
fraccion_t * fraccion_sumar(const fraccion_t *f1, const fraccion_t *f2);

/*
 * Multiplicación exacta simplificada.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
fraccion_t * fraccion_multiplicar(const fraccion_t *f1, const fraccion_t *f2);

/*
 * Conversor a double.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
double fraccion_a_real(const fraccion_t *f);

/*
 * Representación dinámica en formato num/den.
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
char * fraccion_a_cadena(const fraccion_t *f);

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
- En fraccion_crear, normalizá primero el signo para que el denominador sea positivo.
- Simplificá dividiendo numerador y denominador por su MCD (algoritmo de Euclides).
- Si el numerador es 0, el denominador simplificado debe ser 1 (0/1).
- En fraccion_comparar, utilizá producto cruzado para evitar pérdida de precisión con punto flotante.
:::
