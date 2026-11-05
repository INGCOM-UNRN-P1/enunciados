#include "ej-7-27-libreria-de-evaluacion-de-expr.h"

bool eval_and_3(bool a, bool b, bool c) { return a && b && c; }
bool eval_or_3(bool a, bool b, bool c) { return a || b || c; }
bool eval_xor(bool a, bool b) { return a != b; }
bool eval_implicacion(bool p, bool q) { return !p || q; }
bool eval_equivalencia(bool p, bool q) { return p == q; }
