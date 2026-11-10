#include "../dsu-union-25.h"
#include <assert.h>
#include <stdlib.h>
int main(void){const char *e0[]={"x@u","y@u"},*e1[]={"z@u","x@u"},*e2[]={"q@u"};dsu_account_t a[]={{"Ana",e0,2},{"A. Perez",e1,2},{"Luz",e2,1}};size_t *g=NULL;assert(dsu_merge_accounts(a,3,&g));assert(g&&g[0]==g[1]&&g[1]!=g[2]);free(g);assert(dsu_merge_accounts(NULL,0,&g)&&g==NULL);assert(!dsu_merge_accounts(NULL,1,&g)&&g==NULL);const char *bad[]={NULL};dsu_account_t b={"X",bad,1};assert(!dsu_merge_accounts(&b,1,&g)&&g==NULL);}
