#ifndef AVL_TREE_30_H
#define AVL_TREE_30_H
typedef int (*avl_compare_fn)(const void *,const void *);
typedef void (*avl_free_fn)(void *);
typedef struct avl_generic_node { void *key,*value; int height; struct avl_generic_node *left,*right; } avl_generic_node_t;
static inline int avl_compare_int_keys(const void *a,const void *b){int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}
int avl_generic_put(avl_generic_node_t **root,void *key,void *value,avl_compare_fn compare);
void *avl_generic_get(const avl_generic_node_t *root,const void *key,avl_compare_fn compare);
void avl_generic_destroy(avl_generic_node_t **root,avl_free_fn free_key,avl_free_fn free_value);
#endif
