#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data);

int		my_func_test(int a, int b)
{
	if (a > b)
		return (100);
	if (b > a)
		return (-100);
	return (0);
}

//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(void * data)
{
	
	t_list *res = ft_create_elem(data);
    printf("Status: ");
    if (( *(int *)(res->data) == *(int *)data) && res->next == NULL)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
}

int     main(void)
{
	int a;
	
	a = 11;
	ft_test((void *)&a);
    return (0);
}
