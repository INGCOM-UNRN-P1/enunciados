**Identificador:** `ejercicio5` | **Módulo:** Práctica 1

---

Crear un programa que reciba un número entero y calcule e imprima la cantidad total de dígitos que lo componen. El signo no se cuenta como dígito y el valor `0` contiene exactamente un (1) dígito.

---

- **Entrada (`stdin`):** Un número entero $n$.
- **Salida (`stdout`):** La cantidad de dígitos de $n$, seguida de salto de línea.

---

```text
Entrada:
12345

Salida:
5
```

```text
Entrada:
0

Salida:
1
```

```text
Entrada:
-987

Salida:
3
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Contador de Dígitos
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_contador_digitos(int val);

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
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- El valor 0 contiene exactamente 1 dígito.
- Trabajá con el valor absoluto para omitir el signo negativo.
- Contá las divisiones sucesivas por 10 hasta alcanzar 0.
:::
