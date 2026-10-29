# Ejercicio 2: TDA Duración (`tiempo_t`) — Cambio de Implementación

Para demostrar en la práctica que la interfaz independiza al cliente de la representación en memoria, se implementan dos variantes para un mismo archivo de cabecera `tiempo.h`.

## 1. Interfaz única (`tiempo.h`)

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

## 2. Dos implementaciones intercambiables

1. **Implementación A (`tiempo_hms.c`):** Estructura desglosada en campos `horas`, `minutos` y `segundos`. Invariante: `t != NULL && t->minutos < 60 && t->segundos < 60`.
2. **Implementación B (`tiempo_seg.c`):** Estructura compacta almacenando únicamente `unsigned long seg_totales`. Invariante: `t != NULL`. Los selectores calculan su valor al vuelo con `/` y `%`.
