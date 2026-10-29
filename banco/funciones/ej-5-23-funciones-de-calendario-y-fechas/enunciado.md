Implementá funciones modulares para operaciones con fechas representadas mediante sus componentes (`dia`, `mes`, `anio`):
- `bool es_fecha_valida(int dia, int mes, int anio)`: valida si una terna corresponde a una fecha real del calendario gregoriano.
- `int dias_transcurridos(int d1, int m1, int a1, int d2, int m2, int a2)`: calcula la cantidad de días entre dos fechas válidas.
- `int dia_de_semana(int dia, int mes, int anio)`: retorna el día de la semana (0=Domingo, 1=Lunes, ..., 6=Sábado) aplicando la congruencia de Zeller.

**Orientación:**
- Modularizá el cálculo de año bisiesto en una función auxiliar `bool es_bisiesto(int anio)`
- Validá las precondiciones de cada función antes de calcular



---
(ejercicio_5_24)=

### 📋 Contrato de las Funciones

```c
/*
 * Lógica de Funciones de Calendario y Fechas
 * Precondiciones: Parámetros dentro del dominio válido de la operación.
 * Postcondiciones: Retorna el valor procesado.
 */
int resolver_ej_23(int n);

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
