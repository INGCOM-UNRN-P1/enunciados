#### Descripción
Escribir una función que convierta un número `n` de una base `b1` a una base
`b2`.


:::{tip} Ayuda (pseudocódigo)
:class: dropdown
```{code-block} pseudocode
:linenos:
FUNCION convertir_base(numero_original, b1, b2)
INICIO
    // Paso 1: Convertir de b1 a base 10
    valor_base10 = 0
    // ... lazo para calcular el valor en base 10 ...

    // Paso 2: Convertir de base 10 a b2
    resultado_final = ""
    MIENTRAS valor_base10 > 0 HACER
        resto = valor_base10 MOD b2
        resultado_final = caracter(resto) + resultado_final
        valor_base10 = valor_base10 / b2
    FIN MIENTRAS

    RETORNAR resultado_final
FIN FUNCION

```

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Conversión de Base Numérica
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_ion_de_base_numerica(int val);

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
- **Proceso en dos pasos:** El método más simple es:
- **Convertir a base 10:** Convertir el número de su base original `b1` a base 10. Si el número está en un arreglo de dígitos, se calcula $\sum digito_i \cdot b1^i$.
- **Convertir de base 10:** Convertir el número de base 10 a la base de destino `b2` usando divisiones sucesivas y guardando los restos. filas (*row-major order*) para mejorar el uso de caché. estrictamente dentro de los límites del contenedor.
- Validar que la base de destino esté entre 2 y 16.
- Formatear la salida con dígitos alfanuméricos apropiados (0-9, A-F).
:::
