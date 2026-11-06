#include <stdlib.h>
#include "heap-prio-17.h"
struct skew_node{int key;struct skew_node*left,*right;};
static skew_node_t*merge(skew_node_t*a,skew_node_t*b){if(!a)return b;if(!b)return a;if(a->key>b->key){skew_node_t*t=a;a=b;b=t;}skew_node_t*old=a->left;a->left=merge(a->right,b);a->right=old;return a;}
void skew_init(skew_heap_t*h){if(h)h->root=NULL;}
bool skew_insert(skew_heap_t*h,int v){if(!h)return false;skew_node_t*n=malloc(sizeof*n);if(!n)return false;n->key=v;n->left=n->right=NULL;h->root=merge(h->root,n);return true;}
bool skew_merge(skew_heap_t*a,skew_heap_t*b){if(!a||!b||a==b)return false;a->root=merge(a->root,b->root);b->root=NULL;return true;}
bool skew_extract_min(skew_heap_t*h,int*out){if(!h||!out||!h->root)return false;skew_node_t*r=h->root;*out=r->key;h->root=merge(r->left,r->right);free(r);return true;}
static void destroy(skew_node_t*n){if(n){destroy(n->left);destroy(n->right);free(n);}}
void skew_destroy(skew_heap_t*h){if(h){destroy(h->root);h->root=NULL;}}
