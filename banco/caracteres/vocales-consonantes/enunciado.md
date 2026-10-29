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

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Vocales y Consonantes
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_vocales_consonantes(int val);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Valor positivo
```text
Entrada: 5
Salida / Retorno: 10
```
:::
:::{tab-item} Valor cero o negativo
```text
Entrada: 0
Salida / Retorno: 0
```
:::
::::

### ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
4. **Terminación nula:** Asegurar que todas las cadenas de texto conserven el terminador nulo `\0` dentro de los límites del buffer.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Podés normalizar a minúscula con tolower() de <ctype.h>.
- Clasificá en orden: vocal, consonante, dígito y finalmente otro.
:::
