#include "skip-list-10.h"
#include <assert.h>
#include <stdio.h>
int main(void){skip_list_t l;int lo=0,hi=0;skip_list_init(&l,1);assert(!skip_list_10_extremes(&l,&lo,&hi));assert(skip_list_insert_height(&l,-4,1));assert(skip_list_insert_height(&l,20,2));assert(skip_list_10_extremes(&l,&lo,&hi)&&lo==-4&&hi==20);assert(!skip_list_10_extremes(&l,NULL,&hi));assert(skip_list_remove(&l,20));assert(skip_list_10_extremes(&l,&lo,&hi)&&lo==-4&&hi==-4);skip_list_destroy(&l);puts("ok");}
