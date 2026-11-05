# Diccionario ordenado clave-valor con AVL

El diccionario usa claves enteras únicas y valores enteros. `avl_dict_put(&root,key,value)` inserta o reemplaza el valor y devuelve 1 en éxito (0 si no puede reservar memoria o root es NULL). `avl_dict_get(root,key,&value)` devuelve 1 si existe y escribe el valor; en caso contrario devuelve 0. `avl_dict_destroy(&root)` libera todos los nodos y fija root a NULL. La altura se mantiene balanceada tras inserciones.
