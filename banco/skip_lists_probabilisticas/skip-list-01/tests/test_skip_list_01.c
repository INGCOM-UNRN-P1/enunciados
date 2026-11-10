#include "skip-list-01.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;fill(&l);assert(skip_list_01_contains(&l,20));assert(!skip_list_01_contains(&l,21));assert(!skip_list_01_insert(&l,20));assert(skip_list_01_insert(&l,25));assert(skip_list_size(&l)==4);skip_list_destroy(&l);skip_list_destroy(&l);puts("ok");}
