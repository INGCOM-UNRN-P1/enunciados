# Serialización y reconstrucción de min-heap

Implementá serialización binaria portable lógica de un min-heap de int32_t: formato textual decimal separado por espacios y reconstrucción desde texto en buffer terminado en NUL. Serializar debe rechazar capacidad insuficiente, reconstruir valida todos los tokens y la propiedad min-heap. Formato vacío es cadena vacía.

La API completa y sus firmas están en `heap-prio-29.h`. Los tamaños son explícitos, los errores se reportan con `bool` y los valores de salida sólo se modifican al completar la operación, salvo que la documentación indique lo contrario.
