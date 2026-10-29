# Auditoría y Refactorización de Código Seguro (CWE-120)

## 📖 Consigna

Refactorizar un analizador de credenciales de usuario para eliminar vulnerabilidades de desbordamiento de búfer (*Buffer Overflow / CWE-120*).

El programa debe procesar credenciales de formato `USUARIO:ROL:TOKEN` asegurando:
1. Máxima longitud permitida para `USUARIO`: 31 caracteres (+ `\0`).
2. Máxima longitud permitida para `ROL`: 15 caracteres (+ `\0`).
3. Máxima longitud permitida para `TOKEN`: 63 caracteres (+ `\0`).
4. Si algún campo excede su límite o el formato está incompleto, debe rechazarlo con `RECHAZADO: OVERFLOW_PREVENTED`.
5. Si es válido, imprime `ACEPTADO user=<USUARIO> rol=<ROL>`.

## 📋 Contrato de las Funciones

```c
/*
 * Operación procesar_credencial
 * Precondiciones: Los punteros recibidos deben ser válidos y no nulos.
 * Postcondiciones: Modifica el estado de la estructura o buffer de manera segura.
 */
void procesar_credencial(const char *raw_line);

```

## 🧪 Ejemplos de Ejecución

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

## ⚠️ Precondiciones y Casos Borde

1. **Valores fuera de rango:** Verificar siempre que los datos de entrada cumplan con los rangos admisibles antes de operar.
2. **Punteros nulos:** Validar que los punteros recibidos no sean `NULL` para prevenir fallos de segmentación (*SIGSEGV*).
5. **Casos vacíos o neutros:** Contemplar adecuadamente entradas con longitud cero o valores neutros según corresponda.

## 🎯 Criterios de Aceptación

- [ ] El código compila limpiamente bajo estándar C11 sin warnings con flags estrictos (`-Wall -Wextra -Werror`).
- [ ] Se satisfacen todas las pruebas unitarias y casos de prueba provistos.
- [ ] Las funciones validan exhaustivamente sus precondiciones y gestionan casos borde de forma robusta.

:::{hint} Consideraciones Didácticas
- Reemplazá funciones no seguras como gets() o strcpy() por fgets() y snprintf() con límite de tamaño explícito.
- Validá siempre los tamaños de cadena antes de copiar o concatenar.
- Sanitizá las terminaciones nulas '\0' en cadenas recibidas desde entrada externa.
:::
