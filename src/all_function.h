#include <stdio.h>
#ifndef ALL_POSSIBLE_SUM_H_   
#define ALL_POSSIBLE_SUM_H_     
#include "templates.h"    
#ifdef T  
#undef T  
#endif  

#define T double  
#include "template_function.h"    
void FUNC(Display,T)(list_t(T) const* L);
list_t(T) * FUNC(list_read,T)();
#ifdef T  
#undef T  
#endif  

#define T int  
#include "template_function.h"
void FUNC(Display,T)(list_t(T) const* L);
list_t(T) * FUNC(list_read,T)();
#ifdef T
#undef T  
#endif

#endif
/*
#define T float  
#include "sum_as_template.h"    
#ifdef T  
#undef T  
#endif */ 