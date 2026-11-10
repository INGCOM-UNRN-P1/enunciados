# Medición de búsquedas y costo amortizado en DSU

Medí el trabajo observable de una secuencia de consultas `find` contando cuántos enlaces padre debe seguir cada búsqueda en el bosque actual. `dsu_measure_find_steps` devuelve la suma y confirma el resultado mediante `valid`. La función es de solo lectura: no comprime caminos ni modifica rangos o tamaños.

Índices inválidos, padres fuera de rango, ciclos y desbordamiento invalidan la medición: devuelve cero y `*valid=false`. Una secuencia vacía válida mide cero. Contrastá el costo con la compresión de caminos y la cota amortizada de la inversa de Ackermann; esta función mide una traza concreta, no calcula α(n).
