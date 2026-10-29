Implementá conversiones entre bases numéricas:
- `int binario_a_decimal(long binario)`
- `long decimal_a_binario(int decimal)`
- Similar para octal y hexadecimal

**Orientación:**
- Para convertir a decimal: suma potencias de la base
- Para convertir desde decimal: divisiones sucesivas
- Validá que los dígitos sean válidos para la base



---
(ejercicio_5_15)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Conversión de Bases
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_14(int n);

```

### 🧪 Ejemplos de Ejecución

::::{tab-set}
:::{tab-item} Caso general
```text
val = 10
Retorno esperado calculado
```
:::
:::{tab-item} Caso límite
```text
val = 0
Retorno 0 o manejo de borde
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
