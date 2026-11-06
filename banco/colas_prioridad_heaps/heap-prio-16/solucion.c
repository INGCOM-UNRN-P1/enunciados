#include <stdlib.h>
#include <stddef.h>
#include "heap-prio-16.h"
struct fib_node{int key;size_t degree;struct fib_node*parent,*child,*left,*right;};
static fib_node_t*node(int v){fib_node_t*n=calloc(1,sizeof*n);if(n){n->key=v;n->left=n->right=n;}return n;}
static void add_root(fib_heap_t*h,fib_node_t*n){n->parent=NULL;if(!h->min)h->min=n;else{n->left=h->min;n->right=h->min->right;h->min->right->left=n;h->min->right=n;if(n->key<h->min->key)h->min=n;}}
void fib_init(fib_heap_t*h){if(h){h->min=NULL;h->n=0;}}
bool fib_insert(fib_heap_t*h,int v){if(!h)return false;fib_node_t*n=node(v);if(!n)return false;add_root(h,n);h->n++;return true;}
bool fib_union(fib_heap_t*a,fib_heap_t*b){if(!a||!b||a==b)return false;if(!b->min)return true;if(!a->min){*a=*b;}else{fib_node_t*x=a->min,*y=b->min,*xr=x->right,*yl=y->left;x->right=y;y->left=x;yl->right=xr;xr->left=yl;if(y->key<a->min->key)a->min=y;a->n+=b->n;}b->min=NULL;b->n=0;return true;}
static void link_child(fib_node_t*c,fib_node_t*p){c->parent=p;c->left=c->right=c;if(!p->child)p->child=c;else{c->left=p->child;c->right=p->child->right;p->child->right->left=c;p->child->right=c;}p->degree++;}
bool fib_extract_min(fib_heap_t*h,int*out){
    if(!h||!out||!h->min)return false;
    fib_node_t*z=h->min;
    while(z->child){
        fib_node_t*c=z->child;
        if(c->right==c)z->child=NULL;
        else{z->child=c->right;c->left->right=c->right;c->right->left=c->left;}
        c->left=c->right=c;c->parent=NULL;if(z->degree)z->degree--;add_root(h,c);
    }
    if(z->right==z)h->min=NULL;
    else{z->left->right=z->right;z->right->left=z->left;h->min=z->right;}
    *out=z->key;free(z);h->n--;
    if(h->min){
        fib_node_t*r=h->min;size_t count=0;
        do{count++;r=r->right;}while(r!=h->min);
        fib_node_t**roots=malloc(count*sizeof*roots);
        if (!roots) {
            fib_node_t *minimo = h->min;
            for (fib_node_t *p = minimo->right; p != h->min; p = p->right)
                if (p->key < minimo->key) minimo = p;
            h->min = minimo;
            return true;
        }
        r=h->min;for(size_t i=0;i<count;i++){roots[i]=r;r=r->right;}
        fib_node_t*degrees[sizeof(size_t)*8+2]={0};
        for(size_t i=0;i<count;i++){
            fib_node_t*x=roots[i];if(x->parent)continue;
            while(x->degree<sizeof degrees/sizeof degrees[0]&&degrees[x->degree]){
                fib_node_t*y=degrees[x->degree];degrees[x->degree]=NULL;
                if(y->key<x->key){fib_node_t*t=x;x=y;y=t;}
                y->left->right=y->right;y->right->left=y->left;
                y->left=y->right=y;link_child(y,x);
            }
            if(x->degree<sizeof degrees/sizeof degrees[0])degrees[x->degree]=x;
        }
        h->min=NULL;
        for(size_t i=0;i<sizeof degrees/sizeof degrees[0];i++)if(degrees[i]){
            degrees[i]->left=degrees[i]->right=degrees[i];add_root(h,degrees[i]);
        }
        free(roots);
    }
    return true;
}
static void free_ring(fib_node_t*n){if(!n)return;fib_node_t*start=n,*p=n;do{fib_node_t*next=p->right;free_ring(p->child);free(p);p=next;}while(p!=start);}
void fib_destroy(fib_heap_t*h){if(h){free_ring(h->min);h->min=NULL;h->n=0;}}
