#include <stdio.h>

#include <stdlib.h>
#include <string.h>
// Función A
char *obtener_saludo(void)
{
    char saludo[50] = "Hola, mundo!";
    return saludo; // Línea problemática 1
}
// Función B
int *crear_arreglo_estatico(void)
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}
// Función C
int *crear_arreglo_dinamico(void)
{
    int *arr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    return arr;
}
// Función D
void procesar_y_liberar(int **ptr)
{
    free(*ptr);
    // Línea problemática 2: no se asigna NULL
}
int main(void)
{
    // Escenario 1
    char *s1 = obtener_saludo();
    printf("%s\n", s1); // Comportamiento indefinido
    // Escenario 2
    int *arr1 = crear_arreglo_estatico();
    printf("%d\n", arr1[0]); // OK
    // Escenario 3
    int *arr2 = crear_arreglo_dinamico();
    printf("%d\n", arr2[0]); // OK
    free(arr2);
    // Escenario 4
    int *arr3 = crear_arreglo_dinamico();
    procesar_y_liberar(&arr3);
    printf("%d\n", arr3[0]); // Línea problemática 3: uso después de free
    return 0;
}