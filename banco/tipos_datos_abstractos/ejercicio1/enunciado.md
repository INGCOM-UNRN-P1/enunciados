# Ejercicio 1: TDA Fracción (`fraccion_t`) — Invariantes y Normalización

Se desea modelar un Tipo de Dato Abstracto para operar con números racionales exactos $\left(\frac{\text{numerador}}{\text{denominador}}\right)$.

## 1. El Invariante de Representación

En `fraccion.c`, una fracción válida debe cumplir siempre las siguientes condiciones en su función `static bool fraccion_invariante(const fraccion_t *f)`:

1. El puntero `f` no es `NULL`.
2. El denominador es estrictamente mayor que cero ($\text{denominador} > 0$). Si la fracción es negativa, el signo debe residir únicamente en el numerador.
3. La fracción se encuentra simplificada a su mínima expresión (irreductible): el Máximo Común Divisor entre $|\text{numerador}|$ y $\text{denominador}$ es $1$. Si el numerador es $0$, el denominador debe ser obligatoriamente $1$.

## 2. Interfaz requerida (`fraccion.h`)

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
