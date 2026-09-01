/*
 * Balanceo de Delimitadores con Pila
 * Catedra Programacion I - UNRN
 */
#include <stdio.h>
#include <string.h>

int coincide(char apertura, char cierre) {
    if (apertura == '(' && cierre == ')') return 1;
    if (apertura == '[' && cierre == ']') return 1;
    if (apertura == '{' && cierre == '}') return 1;
    return 0;
}

int main(void) {
    char cadena[256] = {0};
    if (scanf("%255s", cadena) == 1) {
        char pila[256];
        int tope = 0;
        int balanceado = 1;
        for (size_t i = 0; cadena[i] != '\0'; i++) {
            char c = cadena[i];
            if (c == '(' || c == '[' || c == '{') {
                pila[tope++] = c;
            } else if (c == ')' || c == ']' || c == '}') {
                if (tope == 0 || !coincide(pila[--tope], c)) {
                    balanceado = 0;
                    break;
                }
            }
        }
        if (tope != 0) balanceado = 0;
        printf("%s\n", balanceado ? "BALANCEADO" : "DESBALANCEADO");
    }
    return 0;
}