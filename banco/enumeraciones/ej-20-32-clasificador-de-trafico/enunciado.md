# Clasificador de tráfico

Implementar una función que clasifique un paquete basándose en reglas
heurísticas.



``` c
enum tipo_trafico clasificar_paquete(const paquete_red_t *paquete);
```

**Reglas sugeridas:**
- Puertos conocidos (80, 443, 22) → `TRAFICO_NORMAL`
- Puertos altos no estándar → `TRAFICO_SOSPECHOSO`
- Transferencias muy grandes o patrones anómalos → `TRAFICO_MALICIOSO`

## Contrato

Implementá la API declarada en `ej-20-32-clasificador-de-trafico.h`. La función debe respetar los rangos documentados y manejar entradas inválidas sin acceso fuera de rango.

## Compilación

Usar C11 con `-Wall -Wextra -Werror`.
