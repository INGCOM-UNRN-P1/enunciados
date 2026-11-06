#include "heap-prio-18.h"
#include <stdlib.h>
static unsigned rank_of(const leftist_node_t *n){return n?n->rank:0;}
static leftist_node_t *meld_nodes(leftist_node_t *a,leftist_node_t *b){if(!a)return b;if(!b)return a;if(a->key>b->key){leftist_node_t*t=a;a=b;b=t;}a->right=meld_nodes(a->right,b);if(rank_of(a->left)<rank_of(a->right)){leftist_node_t*t=a->left;a->left=a->right;a->right=t;}a->rank=rank_of(a->right)+1;return a;}
void leftist_heap_init(leftist_heap_t*h){if(h)h->root=NULL;}
bool leftist_heap_insert(leftist_heap_t*h,int k){if(!h)return false;leftist_node_t*n=malloc(sizeof(*n));if(!n)return false;*n=(leftist_node_t){k,1,NULL,NULL};h->root=meld_nodes(h->root,n);return true;}
bool leftist_heap_peek(const leftist_heap_t*h,int*out){if(!h||!h->root||!out)return false;*out=h->root->key;return true;}
bool leftist_heap_pop(leftist_heap_t*h,int*out){if(!h||!h->root||!out)return false;leftist_node_t*r=h->root;*out=r->key;h->root=meld_nodes(r->left,r->right);free(r);return true;}
bool leftist_heap_meld(leftist_heap_t*a,leftist_heap_t*b){if(!a||!b||a==b)return false;a->root=meld_nodes(a->root,b->root);b->root=NULL;return true;}
static void free_nodes(leftist_node_t*n){if(n){free_nodes(n->left);free_nodes(n->right);free(n);}}
void leftist_heap_destroy(leftist_heap_t*h){if(h){free_nodes(h->root);h->root=NULL;}}
