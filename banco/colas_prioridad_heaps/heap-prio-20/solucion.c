#include "heap-prio-20.h"
#include <stdlib.h>
typedef struct{huffman_node_t*n;uint64_t order;} item_t;
static bool less(item_t a,item_t b){return a.n->frequency<b.n->frequency||(a.n->frequency==b.n->frequency&&a.order<b.order);}
static void push(item_t*a,size_t*n,item_t v){size_t i=(*n)++;while(i){size_t p=(i-1)/2;if(!less(v,a[p]))break;a[i]=a[p];i=p;}a[i]=v;}
static item_t pop(item_t*a,size_t*n){item_t v=a[0],x=a[--*n];if(*n){size_t i=0;while(2*i+1<*n){size_t j=2*i+1;if(j+1<*n&&less(a[j+1],a[j]))j++;if(!less(a[j],x))break;a[i]=a[j];i=j;}a[i]=x;}return v;}
void huffman_destroy(huffman_node_t*r){if(r){huffman_destroy(r->left);huffman_destroy(r->right);free(r);}}
bool huffman_build(const uint64_t*f,size_t n,huffman_node_t**out){if(!out||(n&&!f)||n>SIZE_MAX/sizeof(item_t))return false;*out=NULL;if(!n)return true;item_t*a=malloc(n*sizeof(*a));if(!a)return false;size_t len=0;for(size_t i=0;i<n;i++){huffman_node_t*x=malloc(sizeof(*x));if(!x){for(size_t j=0;j<len;j++)huffman_destroy(a[j].n);free(a);return false;}*x=(huffman_node_t){f[i],i,NULL,NULL};push(a,&len,(item_t){x,i});}uint64_t seq=n;while(len>1){item_t l=pop(a,&len),r=pop(a,&len);if(UINT64_MAX-l.n->frequency<r.n->frequency){huffman_destroy(l.n);huffman_destroy(r.n);for(size_t j=0;j<len;j++)huffman_destroy(a[j].n);free(a);return false;}huffman_node_t*p=malloc(sizeof(*p));if(!p){huffman_destroy(l.n);huffman_destroy(r.n);for(size_t j=0;j<len;j++)huffman_destroy(a[j].n);free(a);return false;}*p=(huffman_node_t){l.n->frequency+r.n->frequency,SIZE_MAX,l.n,r.n};push(a,&len,(item_t){p,seq++});}*out=a[0].n;free(a);return true;}
static bool encontrar_codigo(const huffman_node_t *n, size_t simbolo, size_t profundidad,
                              char *salida, size_t *longitud)
{
    if (!n) return false;
    if (!n->left && !n->right) {
        if (n->symbol != simbolo) return false;
        *longitud = profundidad ? profundidad : 1;
        if (salida && profundidad == 0) salida[0] = '0';
        return true;
    }
    if (profundidad == SIZE_MAX - 1) return false;
    if (encontrar_codigo(n->left, simbolo, profundidad + 1, salida, longitud)) {
        if (salida) salida[profundidad] = '0';
        return true;
    }
    if (encontrar_codigo(n->right, simbolo, profundidad + 1, salida, longitud)) {
        if (salida) salida[profundidad] = '1';
        return true;
    }
    return false;
}

bool huffman_code(const huffman_node_t *raiz, size_t simbolo, char *salida,
                  size_t capacidad, size_t *necesario)
{
    if (!raiz || !necesario || (!salida && capacidad)) return false;
    size_t longitud = 0;
    if (!encontrar_codigo(raiz, simbolo, 0, NULL, &longitud)) return false;
    *necesario = longitud + 1;
    if (capacidad < *necesario || !salida) return false;
    if (!encontrar_codigo(raiz, simbolo, 0, salida, &longitud)) return false;
    salida[longitud] = '\0';
    return true;
}
