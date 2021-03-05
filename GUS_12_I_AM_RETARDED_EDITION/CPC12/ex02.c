#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list);



//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");



int     main(void)
{
	t_list *lst = NULL;
	
	printf("NULLPTR TEST\nStatus: ");
    if (ft_list_size(lst) == 0)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	lst = ft_create_elem("0");
	printf("Status: ");
    if (ft_list_size(lst) == 1)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	ft_list_push_front(&lst, "0");

	printf("Status: ");
    if (ft_list_size(lst) == 2)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }

	ft_list_push_front(&lst, "NULL");
	printf("Status: ");
    if (ft_list_size(lst) == 3)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }

	ft_list_push_front(&lst, "NULL");
	printf("Status: ");
    if (ft_list_size(lst) == 4)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
    return (0);
}
