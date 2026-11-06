#include "trie-pref-12.h"
#include <stdlib.h>
typedef struct bitn {struct bitn *h[2];} bitn_t;
static void bitfree(bitn_t *n){if(n){bitfree(n->h[0]);bitfree(n->h[1]);free(n);}}
static bool bitadd(bitn_t *r,uint32_t x){bitn_t *n=r;for(int i=31;i>=0;i--){unsigned b=(x>>(unsigned)i)&1u;if(!n->h[b]){n->h[b]=calloc(1,sizeof(bitn_t));if(!n->h[b])return false;}n=n->h[b];}return true;}
static uint32_t bitmax(const bitn_t *r,uint32_t x){const bitn_t *n=r;uint32_t z=0;for(int i=31;i>=0;i--){unsigned b=(x>>(unsigned)i)&1u,w=b^1u;if(n->h[w]){z|=UINT32_C(1)<<(unsigned)i;n=n->h[w];}else n=n->h[b];}return z;}
bool max_xor_pares(const uint32_t *v,size_t n,uint32_t *out){if(!v||n<2||!out)return false;bitn_t *r=calloc(1,sizeof *r);if(!r)return false;uint32_t best=0;bool ok=bitadd(r,v[0]);for(size_t i=1;i<n&&ok;i++){uint32_t x=bitmax(r,v[i]);if(x>best)best=x;ok=bitadd(r,v[i]);}bitfree(r);if(ok)*out=best;return ok;}
