# GenericList
It's simple realisation list generic in C. To solve this problem, I used macros.

So, in this code you can see type list_t(T), where T - random type. For example, in this program I use int and double. 
Type list_t has as common functions (list_create, list_free, and other functions are familiar type list), which are described in template.c, as special functions for type T (list_read, Display).
