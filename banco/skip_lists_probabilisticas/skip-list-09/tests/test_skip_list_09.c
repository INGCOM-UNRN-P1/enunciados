#include "skip-list-09.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;fill(&l);assert(skip_list_09_count_range(&l,15,30)==2);assert(skip_list_09_count_range(&l,10,10)==1);assert(skip_list_09_count_range(&l,31,40)==0);assert(skip_list_09_count_range(&l,30,10)==0);skip_list_destroy(&l);puts("ok");}
