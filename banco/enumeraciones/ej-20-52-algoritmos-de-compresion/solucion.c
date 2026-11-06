#include "ej-20-52-algoritmos-de-compresion.h"
bool algoritmo_compresion_valido(enum algoritmo_compresion a){return (unsigned)a<COMP_ALGORITMO_MAX;}
bool nivel_compresion_valido(enum nivel_compresion n){return n==NIVEL_MINIMO||n==NIVEL_RAPIDO||n==NIVEL_NORMAL||n==NIVEL_MAXIMO;}
