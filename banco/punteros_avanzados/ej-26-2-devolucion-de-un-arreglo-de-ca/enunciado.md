Reimplementar el ejercicio de "Tokenización" para que la función devuelva un
`char**` (un arreglo de cadenas terminado en `NULL`) alojado dinámicamente. La
función debe ser `char** dividir_cadena(const char *s, const char
*delimitador)`.

**Lógica y Consideraciones:**
- **Memoria**: La función es responsable de reservar memoria tanto para el
  arreglo de punteros (`char**`) como para cada una de las cadenas (tokens)
  individuales.
- **Liberación**: Se debe crear una función `void liberar_tokens(char **tokens)`
  que recorra el arreglo y libere cada cadena, y finalmente libere el arreglo de
  punteros.



---

## Punteros a Función

Un puntero a función almacena la dirección de memoria de una función ejecutable.
Permite pasar funciones como argumentos a otras funciones, creando código más
genérico y extensible.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Devolución de un Arreglo de Cadenas (Tokenizer)
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__de_un_arreglo_de_ca(int val);

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
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
