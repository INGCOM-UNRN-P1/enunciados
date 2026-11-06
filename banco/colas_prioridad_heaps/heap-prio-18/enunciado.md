# Montículo leftist de mínimos con distancia nula

Implementá un leftist heap min con rango nulo (NPL). La API permite inicializar, insertar, consultar y extraer el mínimo, fusionar dos heaps y liberar nodos. La fusión consume el segundo heap y lo deja vacío. Operaciones: init, insert, peek, pop, meld, destroy. NULL y heap vacío se manejan sin desreferencias; insert devuelve false si no puede reservar memoria.

La API completa y sus firmas están en `heap-prio-18.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
