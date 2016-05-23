#ifdef T    
#include "templates.h"  
DEFINE_L(T);
/*list_t(T) FUNC(sum,T)(list_t(T) a, list_t(T) b);*/
list_t(T) * FUNC(list_create,T)(T el);
int FUNC(list_add_begin,T)(list_t(T) **L, T el);
int FUNC(list_add_back,T)(list_t(T) **L, T el);
size_t FUNC(list_length,T)(list_t(T) const *L);
list_t(T) * FUNC(list_node_at,T)(list_t(T) *L, size_t index);
T * FUNC(list_get,T)(list_t(T) *L, size_t index);
T FUNC(list_sum,T)(list_t(T) const * const L);
void FUNC(list_free,T)(list_t(T) **L);
/*void FUNC(Display,T)(list_t(T) const* L);
list_t(T) * FUNC(list_read,T)();*/
#endif 