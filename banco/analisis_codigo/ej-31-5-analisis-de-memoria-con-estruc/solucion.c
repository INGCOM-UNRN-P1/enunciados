#include <stdlib.h>
#include <string.h>
typedef struct
{
    char *nombre;
    int edad;
    double salario;
} empleado_t;
empleado_t *crear_empleado(const char *nom, int edad_emp, double sal)
{
    empleado_t *nuevo = malloc(sizeof(empleado_t));
    int len_nombre = strlen(nom);
    nuevo->nombre = malloc(len_nombre + 1);
    strcpy(nuevo->nombre, nom);
    nuevo->edad = edad_emp;
    nuevo->salario = sal;
    // PUNTO DE ANÁLISIS
    return nuevo;
}

int proc_e_memoria_con_estruc(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main()
{
    empleado_t *emp1 = NULL;
    empleado_t *emp2 = NULL;
    emp1 = crear_empleado("Ana García", 28, 45000.0);
    return 0;
}