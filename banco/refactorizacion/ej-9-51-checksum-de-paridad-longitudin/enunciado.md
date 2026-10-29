:::{exercise}
:label: ej-ref-checksum-paridad
Analizá el siguiente algoritmo que calcula la suma de verificación módulo 256
con residuo ajustado sobre un bloque de datos:

``` c
int chk(int d[],int n){int s=0;for(int i=0;i<n;i++)s=(s+d[i])%256;return(256-s)%256;}
```

**Tu tarea:**
1. Determinar cómo este checksum asegura que la suma de todos los datos más el
   checksum sea congruente con 0 módulo 256.
2. Refactorizar la función en estilo Allman con constantes simbólicas `#define
   MODULO_CHECKSUM 256`.
3. Validar entradas negativas o punteros nulos.
4. Escribir tests unitarios que verifiquen la invariante $\sum \text{datos} +
   \text{checksum} \equiv 0 \pmod{256}$.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Checksum de Paridad Longitudinal
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_e_paridad_longitudin(int val);

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
- Definí una constante #define MODULO_CHECKSUM 256 para evitar literales mágicos.
- Validá punteros nulos y tamaños de bloque no positivos antes de iterar.
- Comprobá que la suma de todos los datos más el checksum resultante sea congruente con 0 módulo 256.
:::
