# TAD AVL genérico por comparador

Implemente un mapa AVL genérico cuyos nodos guardan punteros opacos a clave y valor. El llamador conserva ownership de esos objetos hasta llamar a destroy. El comparador retorna negativo, cero o positivo como `qsort`. `avl_generic_put` inserta/reemplaza y devuelve 1, o 0 ante argumentos inválidos/fallo de memoria. `avl_generic_get` devuelve el valor asociado o NULL si no existe. `avl_generic_destroy` destruye recursivamente los nodos y opcionalmente llama a los liberadores para clave y valor; finalmente fija raíz a NULL.
