:::{exercise}
:label: ej-ref-vigenere-aritmetico
Analizá el siguiente bloque de código. Aplica el cifrado de Vigenère sobre un
arreglo de caracteres usando una clave alfabética repetida, ajustando las letras
mayúsculas y minúsculas módulo 26, pero fue condensado en 5 líneas de
expresiones confusas:

``` c
void vig(char t[],int n,char k[],int m,int dec){for(int i=0,j=0;i<n;i++){char c=t[i];if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){int base=(c>='a')?'a':'A';int kbase=(k[j%m]>='a')?'a':'A';int sh=k[j%m]-kbase;if(dec)sh=26-(sh%26);t[i]=(char)(base+((c-base+sh)%26));j++;}}}
```

**Tu tarea:**
1. Desentrañar la aritmética modular del desplazamiento tanto para cifrado (`dec
   = 0`) como para descifrado (`dec = 1`).
2. Identificar todos los code smells (ternarios anidados, falta de llaves
   Allman, nombres mudos `t, n, k, m, dec, sh`).
3. Refactorizar el algoritmo en funciones puras y desacopladas:
   - `char desplazar_caracter(char c, int desplazamiento, bool descifrar)`
   - `int obtener_desplazamiento_clave(char c_clave)`
   - `void cifrar_vigenere(char texto[], int long_texto, const char clave[], int
     long_clave)`
   - `void descifrar_vigenere(char texto[], int long_texto, const char clave[],
     int long_clave)`
4. Escribir una suite completa de pruebas unitarias con `assert()` que verifique
   que descifrar un texto cifrado recupere exactamente el mensaje original
   (propiedad de reversibilidad).

:::

---

## Notas Finales

:::{tip} Criterios de Calidad para una Buena Refactorización

- **Preservación del comportamiento:** Todo refactor debe garantizar que los
  resultados matemáticos y lógicos sean idénticos a los del código original.
- **Auto-documentación:** La combinación de nombres descriptivos en `snake_case`
  y funciones con responsabilidad única hace que el código se explique por sí
  mismo sin necesidad de comentarios redundantes.
- **Cobertura con pruebas:** Toda función refactorizada debe acompañarse de su
  respectiva función de prueba automatizada con `assert()`.

:::

### 📋 Contrato de las Funciones

```c
/*
 * Procesa el flujo principal de [EXTRA DIFÍCIL] El Cifrador Vigenère Aritmético Cripto-Comprimido
 * Precondiciones: val representa el parámetro de entrada del flujo.
 * Postcondiciones: Retorna el resultado correspondiente o 0 si val <= 0.
 */
int proc_cil_el_cifrador_vige(int val);

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
- **Preservación del comportamiento:** Todo refactor debe garantizar que los resultados matemáticos y lógicos sean idénticos a los del código original.
- **Auto-documentación:** La combinación de nombres descriptivos en `snake_case` y funciones con responsabilidad única hace que el código se explique por sí mismo sin necesidad de comentarios redundantes.
- **Cobertura con pruebas:** Toda función refactorizada debe acompañarse de su respectiva función de prueba automatizada con `assert()`.
:::
