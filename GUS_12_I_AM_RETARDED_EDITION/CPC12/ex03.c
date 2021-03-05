#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list);



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
	t_list *last = lst;

	printf("NULLPTR TEST\nStatus: ");
    if (ft_list_last(lst) == last)
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
	last = lst;

	printf("Status: ");
    if (ft_list_last(lst) == last)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	last = ft_create_elem("0");
	lst->next = last;
	
	printf("Status: ");
    if (ft_list_last(lst) == last)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }

	last = ft_create_elem("0");
	lst->next->next = last;

	printf("Status: ");
    if (ft_list_last(lst) == last)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }

	last = ft_create_elem("0");
	lst->next->next->next = last;
	
	printf("Status: ");
    if (ft_list_last(lst) == last)
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
