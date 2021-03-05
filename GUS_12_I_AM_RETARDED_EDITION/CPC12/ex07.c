#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);


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
	t_list *lst;
	
	lst = NULL;
	t_list *last = ft_list_at(lst, 0);
	//////////////////////////////////////////////////////

	printf("NULLPTR TEST\nStatus: ");
    if (last == NULL)
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
	last = ft_list_at(lst, 5);
	//////////////////////////////////////////////////////

	printf("NULLPTR TEST\nStatus: ");
    if (last == NULL)
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
	char *t = malloc(2);
	t[0] = '0';
	t[1] = 0;
	char *t1 = malloc(2);
	t1[0] = '1';
	t1[1] = 0;
	char *t2 = malloc(2);
	t2[0] = '2';
	t2[1] = 0;
	char *t3 = malloc(2);
	t3[0] = '3';
	t3[1] = 0;
	lst = ft_create_elem(t);
	last = ft_create_elem(t1);
	lst->next = last;
	last = ft_create_elem(t2);
	lst->next->next = last;
	last = ft_create_elem(t3);
	lst->next->next->next = last;
	/*/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\*/
	last = ft_list_at(lst, 3);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (strcmp((char *)last->data,t3) == 0)
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
	last = ft_list_at(lst, 0);
	//////////////////////////////////////////////////////
	printf("Status: ");
    if (strcmp((char *)last->data,t) == 0)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
	/////////////////////////////////////////////////////

	free(t1);
	free(t);
	free(t2);
	free(lst);
	
    return (0);
}
