**Identificador:** `ejercicio4` | **Módulo:** Práctica 1

---

Implementar un programa que tome un número entero y muestre por pantalla el número resultante con sus dígitos en orden inverso, preservando el signo correspondiente.

---

- **Entrada (`stdin`):** Un número entero $n$.
- **Salida (`stdout`):** El número con los dígitos invertidos, seguido de salto de línea.

---

```text
Entrada:
1234

Salida:
4321
```

```text
Entrada:
-567

Salida:
-765
```

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Invertir un Número Entero
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_invertir_numero(int val);

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
- Extraé el último dígito con el operador módulo: digito = n % 10.
- Multiplicá el acumulador por 10 y sumale el nuevo dígito: invertido = invertido * 10 + digito.
- Dividí el número por 10 en cada iteración para descartar el dígito procesado.
- Preservá el signo si el número original era negativo.
:::
