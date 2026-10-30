Implementar el módulo [`slug_generator.h`](ejercicios/ejercicio2/slug_generator.h) para transformar títulos arbitrarios en identificadores amigables para URL (slugs):

- `bool generar_slug(const cadena_segura_t *titulo, cadena_segura_t *slug);`  
  Normaliza `titulo` convirtiendo mayúsculas a minúsculas, sustituyendo caracteres no alfanuméricos por guiones (`-`), y colapsando múltiples guiones consecutivos en uno solo, sin guiones al inicio ni al final.
- `bool contiene_palabra_prohibida(const cadena_segura_t *texto, const char *palabra);`  
  Verifica si el texto contiene una palabra no permitida o término prohibido utilizando `cadena_segura_buscar`.
- `bool acotar_longitud_slug(cadena_segura_t *slug, size_t max_longitud);`  
  Recorta la longitud máxima del slug generado empleando `cadena_segura_subcadena`, asegurando que el slug resultante no finalice con un guion cortado.

Usa la biblioteca del ejercicio `tp5-libcadena-segura`.

### 📋 Contrato de las Funciones

```c
/**
 * @brief Transforma un titulo en un slug normalizado en minusculas,
 * reemplazando caracteres no alfanumericos por guiones y eliminando guiones repetidos o en bordes.
 *
 * @param titulo Puntero a la cadena segura de origen.
 * @param slug Puntero a la estructura donde se creara el slug resultante.
 * @return true si se genero correctamente el slug, false en caso de error o parametros invalidos.
 */
bool generar_slug(const cadena_segura_t *titulo, cadena_segura_t *slug);

/**
 * @brief Verifica si una cadena contiene una palabra prohibida o subcadena especifica.
 *
 * @param texto Puntero a la cadena segura a evaluar.
 * @param palabra Subcadena a buscar.
 * @return true si la palabra se encuentra en el texto, false si no o parametros invalidos.
 */
bool contiene_palabra_prohibida(const cadena_segura_t *texto, const char *palabra);

/**
 * @brief Acota la longitud de un slug a un maximo dado, evitando que termine en guion.
 *
 * @param slug Puntero al slug a recortar (se modifica in-situ).
 * @param max_longitud Longitud maxima deseada.
 * @return true si la operacion fue exitosa, false en caso de error o parametros invalidos.
 */
bool acotar_longitud_slug(cadena_segura_t *slug, size_t max_longitud);
```

### 🎯 Criterios de Aceptación

- [ ] El código compila limpio con `-std=c11 -Wall -Wextra -Werror`.
- [ ] Pasan todas las pruebas de `prueba.c` (`make test`).
- [ ] Cada función valida sus precondiciones y documenta su contrato.
- [ ] Sin fugas ni accesos inválidos a memoria (`valgrind` / sanitizers).
