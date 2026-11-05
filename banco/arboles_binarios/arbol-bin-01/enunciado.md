# Recorridos en profundidad de un árbol binario

Incluye el tipo compartido `../arbol_binario_common.h`. Implemente `inorder`, `preorder` y `postorder`; cada una recibe una raíz y un `FILE *` de salida, imprime valores separados por espacios y en el orden indicado por el nombre. Si la raíz o el stream son `NULL`, no imprime nada. `liberar_arbol` libera recursivamente los nodos en postorden y acepta `NULL`.

Para una raíz 10 con hijo izquierdo 5 y derecho 20, los resultados son `5 10 20 `, `10 5 20 ` y `5 20 10 ` respectivamente. El llamador conserva ownership del árbol hasta invocar `liberar_arbol`.
