#ifndef AVL_TREE_29_H
#define AVL_TREE_29_H
typedef struct avl_dict_node { int key, value, height; struct avl_dict_node *left,*right; } avl_dict_node_t;
int avl_dict_put(avl_dict_node_t **root,int key,int value);
int avl_dict_get(const avl_dict_node_t *root,int key,int *value);
void avl_dict_destroy(avl_dict_node_t **root);
#endif
