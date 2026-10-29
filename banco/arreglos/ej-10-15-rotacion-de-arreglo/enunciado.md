Implementar una función que rote los elementos de un arreglo `k` posiciones
hacia la derecha. Esto significa que los últimos `k` elementos se moverán al
principio del arreglo, y el resto de los elementos se desplazarán hacia la
derecha.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
PROCEDIMIENTO rotar_derecha(REF arreglo, n, k)
VARIABLES:
    temporal (arreglo de tamaño n)
INICIO
    k = k MOD n // Manejar rotaciones mayores que n

    PARA i DESDE 0 HASTA n-1 HACER
        nueva_pos = (i + k) MOD n
        temporal[nueva_pos] = arreglo[i]
    FIN PARA

    // Copiar de vuelta al arreglo original
    PARA i DESDE 0 HASTA n-1 HACER
        arreglo[i] = temporal[i]
    FIN PARA
FIN PROCEDIMIENTO

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Rotación de arreglo
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc__rotacion_de_arreglo(int val);

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
- **Entrada:** Un arreglo, su tamaño `n`, y el número de posiciones a rotar `k`.
- **Proceso (con arreglo auxiliar):**
- Crear un arreglo temporal del mismo tamaño.
- Recorrer el arreglo original. Para cada elemento en la posición `i`, su nueva posición en el arreglo temporal será `(i + k) % n`.
- Copiar el contenido del arreglo temporal de vuelta al original.
- **Proceso (in-place, más avanzado):**
- Invertir todo el arreglo.
- Invertir los primeros `k` elementos.
- Invertir los `n-k` elementos restantes.
- **Módulo:** Es útil calcular `k = k % n` al principio, por si `k` es mayor que `n`.
- Optimizar el acceso a memoria respetando el orden por filas (*row-major order*) para mejorar el uso de caché.
- Validar que los índices ingresados se encuentren estrictamente dentro de los límites del contenedor.
:::
