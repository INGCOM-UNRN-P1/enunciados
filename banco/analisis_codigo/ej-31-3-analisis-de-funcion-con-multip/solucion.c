#include <stdbool.h>

#include <stdio.h>
typedef struct
{
    double total_ventas;
    int dias_con_ventas;
    double promedio_diario;
    bool hay_ventas;
} reporte_ventas_t;
reporte_ventas_t procesar_ventas(const double ventas[], int dias)
{
    reporte_ventas_t resultado = {0.0, 0, 0.0, false}; // Variable A
    double acumulado = 0.0;                            // Variable B
    int dias_activos = 0;                              // Variable C
    bool primera_venta = true;                         // Variable D
    double venta_maxima = 0.0;                         // Variable E
    for (int dia = 0; dia < dias; dia++)
    { // Variable F
        if (ventas[dia] > 0)
        {
            acumulado += ventas[dia];
            dias_activos++;
            if (primera_venta || ventas[dia] > venta_maxima)
            {
                venta_maxima = ventas[dia];
                primera_venta = false;
            }
        }
    }
    if (dias_activos > 0)
    {
        resultado.total_ventas = acumulado;
        resultado.dias_con_ventas = dias_activos;
        resultado.promedio_diario = acumulado / dias_activos;
        resultado.hay_ventas = true;
    }
    printf("Venta máxima registrada: %.2f\n", venta_maxima);
    return resultado;
}

int main(void)
{
    return 0;
}