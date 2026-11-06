#include "heap-prio-29.h"
#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
bool min_heap_serialize(const int32_t*a,size_t n,char*out,size_t cap,size_t*need){if(!need||(n&&!a)||(!out&&cap))return false;size_t total=1;for(size_t i=0;i<n;i++){int z=snprintf(NULL,0,i?" %" PRId32:"%" PRId32,a[i]);if(z<0||SIZE_MAX-total<(size_t)z)return false;total+=(size_t)z;}*need=total;if(cap<total)return false;size_t at=0;for(size_t i=0;i<n;i++){int z=snprintf(out+at,cap-at,i?" %" PRId32:"%" PRId32,a[i]);if(z<0)return false;at+=(size_t)z;}out[at]='\0';return true;}
bool min_heap_parse(const char*s,int32_t*out,size_t cap,size_t*n){if(!s||!n||(!out&&cap))return false;*n=0;while(isspace((unsigned char)*s))s++;while(*s){if(*n>=cap)return false;errno=0;char*e;long v=strtol(s,&e,10);if(e==s||errno==ERANGE||v<INT32_MIN||v>INT32_MAX||(*e&&!isspace((unsigned char)*e)))return false;out[*n]=(int32_t)v;(*n)++;s=e;while(isspace((unsigned char)*s))s++;}for(size_t i=1;i<*n;i++)if(out[(i-1)/2]>out[i]){*n=0;return false;}return true;}
