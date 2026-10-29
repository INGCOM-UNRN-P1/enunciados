Implementar $base^{exponente}$ de forma recursiva.



``` c
long int potencia(int base, int exponente);
```

**Versión básica:** $O(n)$ en tiempo.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
base \times potencia(base, exp - 1) & \text{si } exp > 0
\end{cases}
$$

**Desafío:** Implementar versión optimizada usando exponenciación rápida (divide
y vencerás) con complejidad $O(\log n)$.

$$
base^{exp} = \begin{cases}
1 & \text{si } exp = 0 \\
\left(base^{exp/2}\right)^2 & \text{si } exp \text{ es par} \\
base \times \left(base^{(exp-1)/2}\right)^2 & \text{si } exp \text{ es impar}
\end{cases}
$$

---

## Series Numéricas Recursivas

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Potencia
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int ejecutar_ej_29_4_potencia(int val);

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
- Validar estrictamente los datos de entrada para manejar valores fuera de rango o tipos inválidos.
- Permitir el procesamiento interactivo continuo mediante un lazo hasta que el usuario elija finalizar.
:::
