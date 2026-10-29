Implementar una función `producto_t leer_registro(int n)` que lea y devuelva el
`n`-ésimo registro del archivo `inventario.dat` sin leer los registros
anteriores.

**Lógica y Consideraciones:**
- **Posicionamiento**: Utilizar `fseek` para mover el puntero del archivo
  directamente a la posición deseada. La posición se calcula como `n *
  sizeof(producto_t)`.
- **Origen**: El desplazamiento debe hacerse desde el inicio del archivo
  (`SEEK_SET`).
- **Lectura**: Una vez posicionado, usar `fread` para leer un solo registro.

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Leer Registro Específico
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__registro_especifico(int val);

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
5. **Acceso a archivos:** Verificar que los punteros `FILE*` retornados por `fopen` sean distintos de `NULL` antes de leer o escribir.
6. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

### 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
