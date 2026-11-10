#include "skip-list-02.h"
#include <assert.h>
#include <stdio.h>
int main(void){uint32_t a=42,b=42;for(int i=0;i<100;i++){size_t x=skip_list_02_random_level(&a),y=skip_list_02_random_level(&b);assert(x>=1&&x<=SKIP_LIST_MAX_LEVEL);assert(x==y);}assert(skip_list_02_random_level(NULL)==1);puts("ok");}
