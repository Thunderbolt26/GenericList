#include <stdio.h>
#include <malloc.h>
#ifdef T    
#include "templates.h"  
/*
list_t(T) FUNC(sum,T) (list_t(T) a, list_t(T) b)  
{       
   list_t(T) summa;
   summa.value = a.value + b.value;
   return summa;
}   */
list_t(T) * FUNC(list_create,T)(T el){
  list_t(T) * New_list=( list_t(T) *) malloc(sizeof(list_t(T)));
  if(New_list==NULL)
    return NULL;
  New_list->Data=el;
  New_list->Next=NULL;
  return New_list;
}

int FUNC(list_add_begin,T)(list_t(T)** L, T el){
  list_t(T) *Newel;
  Newel=FUNC(list_create,T)(el);
  if(Newel==NULL)
    return 0;
  Newel->Data=el;
  Newel->Next=*L;
  *L=Newel;
  return 1;
}
int FUNC(list_add_back,T)(list_t(T)** L, T el){
  list_t(T) *Newel;
  Newel=FUNC(list_create,T)(el);
  if(Newel==NULL)
    return 0;
  while(*L!=NULL)
    L=&(*L)->Next;
  *L=Newel;
  return 1;
}
size_t FUNC(list_length,T)(list_t(T) const *L){
  size_t len=0;
  while(L!=NULL){
    L=L->Next;
    len++;
  }
  return len;
}
list_t(T) * FUNC(list_node_at,T)(list_t(T) * L, size_t index){
	size_t i=0;
	while(L!=NULL){
	if(index==i)
		return L;
    L=L->Next;
    i++;
  }
  return L;
}
T *  FUNC(list_get,T)(list_t(T)* L, size_t index){
  list_t(T) *list_t=FUNC(list_node_at,T)(L,index);
  if(list_t==NULL)
    return NULL;
  return &(list_t->Data);
}

T FUNC(list_sum,T)(list_t(T) const * const L){
   if(L==NULL)
     return 0;
   return L->Data+FUNC(list_sum,T)(L->Next);
} 

void FUNC(list_free,T)(list_t(T) **L){
  list_t(T) *prev = NULL;
  while (*L!=NULL) {
        prev = (*L);
        (*L) = (*L)->Next;
        free(prev);
    }
    free(*L);
} 
/*
void FUNC(Display,T)(list_t(T) const* L){
 if (L==NULL)
 {
   puts("List empty");
   return;
 }
 else
   while(L!=NULL)
   {
     puts("L->Data");
     L=L->Next;
   }
 puts("");
}
list_t(T) * FUNC(list_read,T)()
{
	list_t(T) *L=NULL;
	T el=0;
	while(scanf("%d",&el)==1)
	{
		FUNC(list_add_begin,T)(&L,el);
	}
	return L;
}*/
#endif