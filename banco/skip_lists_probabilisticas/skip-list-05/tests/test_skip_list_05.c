#include "skip-list-05.h"
#include <assert.h>
#include <stdio.h>
static void fill(skip_list_t *l) { skip_list_init(l, 123u); assert(l->head); assert(skip_list_insert_height(l, 10, 1)); assert(skip_list_insert_height(l, 20, 2)); assert(skip_list_insert_height(l, 30, 3)); }
int main(void){skip_list_t l;fill(&l);assert(skip_list_05_remove(&l,20));assert(!skip_list_05_remove(&l,20));assert(skip_list_size(&l)==2);assert(l.head->next[0]->value==10&&l.tail->value==30);assert(skip_list_05_remove(&l,30));assert(l.tail->value==10);assert(skip_list_05_remove(&l,10));assert(!l.tail&&l.level==1);skip_list_destroy(&l);puts("ok");}
