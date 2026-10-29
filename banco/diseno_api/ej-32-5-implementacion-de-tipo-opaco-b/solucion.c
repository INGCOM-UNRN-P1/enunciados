#ifndef STACK_H
#define STACK_H
#include <stdbool.h>
#include <stddef.h>
typedef struct stack stack_t; // Declaración adelantada
stack_t *stack_crear(size_t capacidad_inicial);
void stack_destruir(stack_t **ptr_stack);
bool stack_push(stack_t *stack, int valor);
bool stack_pop(stack_t *stack, int *valor);
bool stack_peek(const stack_t *stack, int *valor);
size_t stack_tamano(const stack_t *stack);
bool stack_esta_vacio(const stack_t *stack);
#endif


int proc_cion_de_tipo_opaco_b(int val)
{
    if (val <= 0) return 0;
    return val * 2;
}

int main(void)
{
    return 0;
}