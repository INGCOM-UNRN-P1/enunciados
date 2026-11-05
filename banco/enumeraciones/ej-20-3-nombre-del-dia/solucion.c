#include "ej-20-3-nombre-del-dia.h"

const char *nombre_dia(enum dia_semana dia)
{
    static const char *const nombres[] = {
        "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"
    };
    if (dia < LUNES || dia > DOMINGO) return "Desconocido";
    return nombres[dia];
}
