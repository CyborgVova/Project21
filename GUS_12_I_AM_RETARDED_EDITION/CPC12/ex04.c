#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);


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
	//////////////////////////////////////////////////////
	t_list *lst = NULL;
	int a = 0;
	ft_list_push_back(&lst, &a);
	//////////////////////////////////////////////////////
	printf("NULLPTR TEST\nStatus: ");
    if ( *(int *)lst->data == a)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	//////////////////////////////////////////////////////
	a = 1;
	ft_list_push_back(&lst, &a);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (*(int *)lst->next->data == a)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	//////////////////////////////////////////////////////
	a = 2;
	ft_list_push_back(&lst, &a);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (*(int *)lst->next->next->data == a)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	//////////////////////////////////////////////////////
	a = 3;
	ft_list_push_back(&lst, &a);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (*(int *)lst->next->next->next->data == a)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	//////////////////////////////////////////////////////
	a = 4;
	ft_list_push_back(&lst, &a);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (*(int *)lst->next->next->next->next->data == a)
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
