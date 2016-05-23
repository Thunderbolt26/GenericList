#include "templates.h"  
#include "all_function.h"
#ifdef T 
#undef T  
#endif  

#define T double  
#include "template_function.c"    
void FUNC(Display,T)(list_t(T) const* L){
 if (L==NULL)
 {
   puts("List empty");
   return;
 }
 else
   while(L!=NULL)
   {
     printf("%f ", L->Data);
     L=L->Next;
   }
 puts("");
}
list_t(T) * FUNC(list_read,T)()
{
	list_t(T) *L=NULL;
	T el=0;
	while(scanf("%lf",&el)==1)
	{
		FUNC(list_add_begin,T)(&L,el);
	}
	return L;
}
#ifdef T  
#undef T  
#endif 

#define T int  
#include "template_function.c"
void FUNC(Display,T)(list_t(T) const* L){
if (L==NULL)
{
   puts("List empty");
   return;
}
else
while(L!=NULL)
{
     printf("%d ", L->Data);
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
}
#ifdef T  
#undef T  
#endif 

/*#define T float  
#include "sum_as_template.c"    
#ifdef T  
#undef T  
#endif  */