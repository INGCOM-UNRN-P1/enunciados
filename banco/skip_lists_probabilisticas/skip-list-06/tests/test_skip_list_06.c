#include "skip-list-06.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
static bool collect(int v,void *p){int *a=p;a[a[0]+1]=v;a[0]++;return true;}int main(void){skip_list_t l;fill(&l);int a[5]={0};assert(skip_list_06_visit(&l,collect,a)==3);assert(a[0]==3&&a[1]==10&&a[2]==20&&a[3]==30);assert(skip_list_06_visit(&l,NULL,NULL)==0);skip_list_destroy(&l);puts("ok");}
