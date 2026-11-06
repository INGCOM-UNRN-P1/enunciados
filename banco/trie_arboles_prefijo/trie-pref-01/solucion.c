#include "trie-pref-01.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int indice(unsigned char c){if(c>='a'&&c<='z')return (int)(c-'a');if(c>='A'&&c<='Z')return 26+(int)(c-'A');if(c>='0'&&c<='9')return 52+(int)(c-'0');if(c=='_')return 62;return -1;}
void trie_insertar(nodo_trie_t*r,const char*w){if(!r||!w)return;for(const char*q=w;*q;q++)if(indice((unsigned char)*q)<0)return;nodo_trie_t*p=r;for(;*w;w++){int i=indice((unsigned char)*w);if(i<0)return;if(!p->hijos[i]){p->hijos[i]=calloc(1,sizeof(*p));if(!p->hijos[i])return;}p=p->hijos[i];}p->es_fin_palabra=1;}
int trie_buscar_prefijo(const nodo_trie_t*r,const char*w){if(!r||!w)return 0;const nodo_trie_t*p=r;for(;*w;w++){int i=indice((unsigned char)*w);if(i<0||!p->hijos[i])return 0;p=p->hijos[i];}return 1;}
void liberar_trie(nodo_trie_t*n){if(!n)return;for(size_t i=0;i<TRIE_ALFABETO;i++)liberar_trie(n->hijos[i]);free(n);}
int main(void){nodo_trie_t raiz={0};char palabra[256],prefijo[256];while(scanf("%255s",palabra)==1&&strcmp(palabra,"FIN")!=0)trie_insertar(&raiz,palabra);if(scanf("%255s",prefijo)==1)printf("PREFIJO_%s: %d\n",prefijo,trie_buscar_prefijo(&raiz,prefijo));for(size_t i=0;i<TRIE_ALFABETO;i++)liberar_trie(raiz.hijos[i]);return 0;}
