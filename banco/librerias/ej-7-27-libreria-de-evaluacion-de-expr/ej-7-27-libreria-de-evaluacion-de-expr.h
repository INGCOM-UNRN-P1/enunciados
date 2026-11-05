#ifndef EJ_EVAL_LOGICA_H
#define EJ_EVAL_LOGICA_H
#include <stdbool.h>
bool eval_and_3(bool a, bool b, bool c);
bool eval_or_3(bool a, bool b, bool c);
bool eval_xor(bool a, bool b);
bool eval_implicacion(bool p, bool q);
bool eval_equivalencia(bool p, bool q);
#endif
