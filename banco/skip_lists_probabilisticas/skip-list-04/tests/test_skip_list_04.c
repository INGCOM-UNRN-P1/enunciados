#include "skip-list-04.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;fill(&l);assert(skip_list_04_search(&l,10));assert(skip_list_04_search(&l,20));assert(skip_list_04_search(&l,30));assert(!skip_list_04_search(&l,0));assert(!skip_list_04_search(NULL,1));skip_list_destroy(&l);puts("ok");}
