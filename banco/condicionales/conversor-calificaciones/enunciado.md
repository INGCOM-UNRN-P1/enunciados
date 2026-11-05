**Identificador:** `ejercicio7` | **Módulo:** Práctica 1

---

Convertí una calificación numérica decimal en escala de $0$ a $10$ a su correspondiente letra estándar (A, B, C, D, F) y su porcentaje equivalente.

### Escala de Equivalencias:
- **$[9.0, 10.0]$:** Calificación `A`
- **$[8.0, 9.0)$:** Calificación `B`
- **$[7.0, 8.0)$:** Calificación `C`
- **$[6.0, 7.0)$:** Calificación `D`
- **$[0.0, 6.0)$:** Calificación `F`

---

- **Entrada (`stdin`):** Un número de punto flotante entre $0.0$ y $10.0$.
- **Salida (`stdout`):** La letra de calificación asignada seguida del porcentaje redondeado al entero más cercano, con los medios hacia arriba (ej. `A (95%)`). La letra se determina a partir de la nota original, antes del redondeo.

---

```text
Entrada:
9.5

Salida:
A (95%)
```

```text
Entrada:
4.0

Salida:
F (40%)
```
