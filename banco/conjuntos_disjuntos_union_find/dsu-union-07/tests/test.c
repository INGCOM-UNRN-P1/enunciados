#include "../dsu-union-07.h"
#include <assert.h>
int main(void){size_t p[]={0,0,2,2,4};dsu07_t d={5,p};assert(dsu07_count(&d)==3);size_t bad[]={1,0};dsu07_t e={2,bad};assert(dsu07_count(&e)==0);assert(dsu07_count(NULL)==0);return 0;}
