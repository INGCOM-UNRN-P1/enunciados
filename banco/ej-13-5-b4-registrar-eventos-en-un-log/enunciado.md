### Ejercicio 13.5 - b.4 - Registrar eventos en un log ⭐⭐☆☆☆

:::{exercise}
:label: ejercicio_archivos_4
:enumerator: 4

**Registrar eventos en un log**

Crea una función `registrar_evento` que reciba un mensaje y lo añada a un
archivo llamado `eventos.log`. La función debe asegurarse de que cada mensaje
nuevo se agregue al final del archivo, sin borrar el contenido anterior. Por
simplicidad, no es necesario agregar una marca de tiempo.

-   **[*plus ultra*]:** Garantizar la terminación con `\0` y prevenir
    desbordamientos de búfer validando la capacidad máxima.
-   **[*plus ultra*]:** Soportar la lectura de cadenas con espacios y múltiples
    líneas de manera robusta.

:::
<!-- {exercise} -->

::::{solution} ejercicio_archivos_4
:class: dropdown

:::{code-block}c
:linenos:
#include <stdio.h>
#include <stdlib.h>
#define EXITO 0
#define ERROR -1
#define ARCHIVO_LOG "eventos.log"
/**
 * Registra un mensaje de evento en un archivo de log.
 *
 * @param mensaje El mensaje a registrar.
 *      #PRE: No puede ser NULL.
 *
 * @returns EXITO si el evento se registró correctamente, ERROR en caso
   contrario.
 *
 * @post El archivo de log contendrá el nuevo mensaje al final.
 */
int registrar_evento(const char *mensaje)
{
    int resultado = EXITO;
    FILE *p_log = fopen(ARCHIVO_LOG, "a");
    if (p_log == NULL)
    {
        perror("Error al abrir el archivo de log");
        resultado = ERROR;
    }
    else
    {
        // Escribir el mensaje y un salto de línea
        if (fprintf(p_log, "%s\n", mensaje) < 0)
        {
            perror("Error al escribir en el archivo de log");
            resultado = ERROR;
        }
        // Cerrar el archivo
        if (fclose(p_log) != 0)
        {
            perror("Error al cerrar el archivo de log");
            resultado = ERROR;
        }
    }
    return resultado;
}
int main(void)
{
    printf("Registrando eventos...\n");
    if (registrar_evento("[INFO] El sistema ha iniciado.") != EXITO)
    {
        fprintf(stderr, "Fallo al registrar el primer evento.\n");
        return EXIT_FAILURE;
    }
    if (registrar_evento("[WARN] El disco está casi lleno.") != EXITO)
    {
        fprintf(stderr, "Fallo al registrar el segundo evento.\n");
        return EXIT_FAILURE;
    }
    if (registrar_evento("[FATAL] No se pudo conectar a la base de datos.") !=
        EXITO)
    {
        fprintf(stderr, "Fallo al registrar el tercer evento.\n");
        return EXIT_FAILURE;
    }
    printf("Eventos registrados en '%s'.\n", ARCHIVO_LOG);
    return EXIT_SUCCESS;
}
:::
<!-- {code-block}c -->

::::
<!-- {solution} ejercicio_archivos_4 -->
