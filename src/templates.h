#ifndef TEMPLATES_H_
#define TEMPLATES_H_

#define CAT3(F) LIST_##F
#define list_t(T) CAT3(T) 

#define CAT1(T) \
typedef struct taglist_##T LIST_##T; \
struct taglist_##T{ \
T Data; \
LIST_##T *Next; \
}

#define DEFINE_L(T) CAT1(T)

#define CAT2(X,Y) X##_##Y
#define FUNC(X,Y) CAT2(X,Y)


#endif 