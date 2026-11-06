#include "trie-pref-04.h"
bool trie_insertar(nodo_trie_t *raiz,const char *palabra){return palabra&&*palabra&&tp_insertar(raiz,palabra);}
bool trie_buscar(const nodo_trie_t *raiz,const char *palabra){return palabra&&*palabra&&tp_buscar(raiz,palabra);}
static bool borrar_rec(nodo_trie_t *n,const unsigned char *p){if(!*p){if(!n->terminal)return false;n->terminal=false;return true;}bool e;size_t i=tp_pos(n,*p,&e);if(!e||!borrar_rec(n->hijos[i].nodo,p+1))return false;trie_nodo_t *h=n->hijos[i].nodo;if(!h->terminal&&!h->cantidad){tp_destruir(h);memmove(n->hijos+i,n->hijos+i+1,(n->cantidad-i-1)*sizeof(*n->hijos));n->cantidad--;}return true;}
bool trie_eliminar(nodo_trie_t *raiz,const char *palabra){return raiz&&palabra&&*palabra&&borrar_rec(raiz,(const unsigned char*)palabra);}
void trie_destruir(nodo_trie_t *raiz){if(!raiz)return;for(size_t i=0;i<raiz->cantidad;i++)tp_destruir(raiz->hijos[i].nodo);free(raiz->hijos);memset(raiz,0,sizeof *raiz);}
