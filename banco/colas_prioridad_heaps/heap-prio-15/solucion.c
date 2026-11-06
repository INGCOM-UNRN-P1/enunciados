#include <stdlib.h>
#include <limits.h>
#include "heap-prio-15.h"
struct binomial_node {int key; unsigned degree; struct binomial_node *parent,*child,*sibling;};
static binomial_node_t*merge_roots(binomial_node_t*a,binomial_node_t*b){binomial_node_t dummy={0,0,NULL,NULL,NULL},*t=&dummy;while(a&&b){if(a->degree<=b->degree){t->sibling=a;a=a->sibling;}else{t->sibling=b;b=b->sibling;}t=t->sibling;}t->sibling=a?a:b;return dummy.sibling;}
static void link_tree(binomial_node_t*y,binomial_node_t*z){y->parent=z;y->sibling=z->child;z->child=y;z->degree++;}
static void unite(binomial_heap_t*h,binomial_node_t*other){binomial_node_t*x=merge_roots(h->head,other);h->head=NULL;if(!x)return;binomial_node_t*prev=NULL,*cur=x,*next=cur->sibling;while(next){if(cur->degree!=next->degree||(next->sibling&&next->sibling->degree==cur->degree)){prev=cur;cur=next;}else if(cur->key<=next->key){cur->sibling=next->sibling;link_tree(next,cur);}else{if(prev)prev->sibling=next;else x=next;link_tree(cur,next);cur=next;}next=cur->sibling;}h->head=x;}
void binomial_init(binomial_heap_t*h){if(h)h->head=NULL;}
bool binomial_empty(const binomial_heap_t*h){return !h||!h->head;}
bool binomial_insert(binomial_heap_t*h,int v){if(!h)return false;binomial_node_t*n=calloc(1,sizeof*n);if(!n)return false;n->key=v;unite(h,n);return true;}
bool binomial_union(binomial_heap_t*a,binomial_heap_t*b){if(!a||!b||a==b)return false;unite(a,b->head);b->head=NULL;return true;}
bool binomial_extract_min(binomial_heap_t*h,int*out){if(!h||!out||!h->head)return false;binomial_node_t*prevmin=NULL,*min=h->head,*prev=NULL;for(binomial_node_t*n=h->head;n;prev=n,n=n->sibling)if(n->key<min->key){min=n;prevmin=prev;}if(prevmin)prevmin->sibling=min->sibling;else h->head=min->sibling;binomial_node_t*c=min->child,*rev=NULL;while(c){binomial_node_t*n=c->sibling;c->sibling=rev;c->parent=NULL;rev=c;c=n;}*out=min->key;free(min);unite(h,rev);return true;}
static void destroy_nodes(binomial_node_t*n){while(n){binomial_node_t*s=n->sibling;destroy_nodes(n->child);free(n);n=s;}}
void binomial_destroy(binomial_heap_t*h){if(h){destroy_nodes(h->head);h->head=NULL;}}
