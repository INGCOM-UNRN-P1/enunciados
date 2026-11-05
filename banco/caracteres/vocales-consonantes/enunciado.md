**Identificador:** `ejercicio6` | **Módulo:** Práctica 1

---

Leé un carácter y determiná si corresponde a una vocal, una consonante, un dígito decimal u otro símbolo.

---

- **Entrada (`stdin`):** Un carácter.
- **Salida (`stdout`):** Imprimir una de las siguientes etiquetas seguida de salto de línea:
  - `Vocal` (si es 'a', 'e', 'i', 'o', 'u' o sus mayúsculas).
  - `Consonante` (si es una letra del alfabeto inglés que no sea vocal).
  - `Digito` (si es un número del '0' al '9').
  - `Otro` (para cualquier otro carácter o símbolo).

---

```text
Entrada:
a

Salida:
Vocal
```

```text
Entrada:
K

Salida:
Consonante
```

```text
Entrada:
7

Salida:
Digito
```

:::{hint} Consideraciones didácticas
- Podés normalizar a minúscula con `tolower()` de `<ctype.h>`.
- Clasificá en orden: vocal, consonante, dígito y finalmente otro.
:::
