:::{exercise}
:label: ej-test-regresion
Explicá el concepto de **Test de Regresión** (*Regression Test*):
1. ¿Cuál es el procedimiento correcto a seguir cuando un usuario o tester
   descubre un bug en producción?
2. ¿Por qué se debe escribir primero la prueba automatizada que reproduzca el
   fallo antes de modificar el código?

-   **[*plus ultra*]:** Describir cómo un test de regresión previene que futuros
    cambios reintroduzcan el mismo error.

:::

:::{solution} ej-test-regresion
:class: dropdown
1. **Procedimiento:**
   - Reproducir el bug reportado.
   - Escribir una prueba unitaria específica que falle debido a ese bug.
   - Modificar el código fuente hasta que la prueba pase.
   - Incorporar la nueva prueba a la suite continua del proyecto.
2. Escribir la prueba primero confirma científicamente la existencia del bug y
   asegura que la corrección realmente solucione la causa raíz sin depender de
   verificaciones manuales.

:::

---

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de Test de Regresión
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_48_test_de_regresion(int val);

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
