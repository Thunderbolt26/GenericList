#include <stdio.h>
#include "all_function.h"  

int main(int argc, char** argv)
{
	list_t(int) *L=NULL;
	list_t(double) *R=NULL;
    int a;
	puts("_____INT_____ ");
	puts("Enter elements for array: ");
	L=list_read_int();
	Display_int(L);

	puts("Enter index of element: ");
    scanf("%d", &a);
    if(list_get_int(L,a-1)==NULL) 
		printf("Fail,length: %d ", (int)list_length_int(L));
	else 
		printf("value: %d \n", *list_get_int(L,a-1));
	printf("Sum: %d \n", list_sum_int(L));
	list_free_int(&L);
	Display_int(L);

	puts("_____DOUBLE_____ ");
	puts("Enter elements for array: ");
	R=list_read_double();
	Display_double(R);
	puts("Enter index of element: ");
    scanf("%d", &a);
    if(list_get_double(R,a-1)==NULL) printf("Fail,length: %d ", (int)list_length_double(R));
	else printf("value: %f \n", *list_get_double(R,a-1));
	printf("Sum: %f \n", list_sum_double(R));
	list_free_double(&R);
	Display_double(R);
	return 0;
}