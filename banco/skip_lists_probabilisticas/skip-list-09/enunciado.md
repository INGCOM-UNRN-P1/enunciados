# Inclusive range count

Implementá la operación de skip list indicada por la API `skip_list_09_...`. La estructura almacena claves enteras únicas y mantiene orden creciente en el nivel cero. Cada nodo se enlaza en `height` niveles (entre 1 y `SKIP_LIST_MAX_LEVEL`). El nivel se genera geométricamente con probabilidad 1/2 de continuar; la semilla hace reproducibles las pruebas.

Inicializá toda lista con `skip_list_init` antes de usarla y liberá sus nodos con `skip_list_destroy`. Las funciones reciben claves repetidas como inserción fallida y deben tolerar punteros nulos según el contrato de la cabecera. En inserción explícita, una altura inválida no debe modificar la lista. La búsqueda, eliminación y métricas deben respetar los límites inclusivos que indica su nombre.

El header documenta las firmas y resultados. Las operaciones del ejercicio deben preservar orden, enlaces, longitud, altura activa y extremos.
