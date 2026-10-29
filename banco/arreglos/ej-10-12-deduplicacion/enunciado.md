Eliminar los elementos duplicados de un arreglo, conservando solo la primera
aparición de cada elemento. La función debe modificar el arreglo _in-place_ y
devolver el nuevo tamaño lógico.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION deduplicar_arreglo(REF arreglo, tamano)
INICIO
    SI tamano == 0 RETORNAR 0

    ORDENAR(arreglo, tamano)

    indice_escritura = 1
    PARA i DESDE 1 HASTA tamano-1 HACER
        SI arreglo[i] != arreglo[i-1] ENTONCES
            arreglo[indice_escritura] = arreglo[i]
            indice_escritura = indice_escritura + 1
        FIN SI
    FIN PARA
    RETORNAR indice_escritura
FIN FUNCION

```

:::

## Verificación

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Deduplicación
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__10_12_deduplicacion(int val);

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
- **Entrada:** Un arreglo y su tamaño.
- **Proceso (si el orden no importa):** Ordenar el arreglo primero. Luego, recorrerlo con dos punteros (`lectura` y `escritura`). Si el elemento actual es diferente al anterior, se copia a la posición de `escritura` y se avanza `escritura`.
- **Proceso (si el orden importa):** Usar un lazo anidado o una estructura de datos auxiliar (como un hash set) para llevar un registro de los elementos ya vistos.
- Validar punteros `NULL` recibidos como parámetro para evitar fallos de segmentación.
- Implementar una versión utilizando aritmética de punteros en lugar de indexación directa.
:::
