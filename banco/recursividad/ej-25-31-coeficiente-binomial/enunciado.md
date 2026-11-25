Calculá C(n,k) = n! / (k! × (n-k)!) recursivamente.

**Orientación:**
- Identidad de Pascal: `C(n,k) = C(n-1,k-1) + C(n-1,k)`
- Casos base: `C(n,0) = 1`, `C(n,n) = 1`

```{dibu}
:caption: Árbol de llamadas de `C(4,2)` con la identidad de Pascal: cada llamada suma lo que devuelven sus dos hijas y las hojas son casos base. `C(2,1)` se resuelve dos veces.
type: call_tree
highlight: ["C(2,1)"]
root:
  call: "C(4,2)"
  returns: 6
  children:
    - call: "C(3,1)"
      returns: 3
      children:
        - {call: "C(2,0)", returns: 1}
        - call: "C(2,1)"
          returns: 2
          children:
            - {call: "C(1,0)", returns: 1}
            - {call: "C(1,1)", returns: 1}
    - call: "C(3,2)"
      returns: 3
      children:
        - call: "C(2,1)"
          returns: 2
          children:
            - {call: "C(1,0)", returns: 1}
            - {call: "C(1,1)", returns: 1}
        - {call: "C(2,2)", returns: 1}
```

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Coeficiente Binomial
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_coeficiente_binomial(int val);

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
2. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.
### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::
