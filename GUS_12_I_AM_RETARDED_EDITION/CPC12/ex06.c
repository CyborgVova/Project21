#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));


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
	t_list *last = lst;
	//////////////////////////////////////////////////////

	printf("NULLPTR TEST\nStatus: ");
    if (lst == NULL)
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
	t1[0] = '0';
	t1[1] = 0;
	char *t2 = malloc(2);
	t2[0] = '0';
	t2[1] = 0;
	char *t3 = malloc(2);
	t3[0] = '0';
	t3[1] = 0;
	lst = ft_create_elem(t);
	last = ft_create_elem(t1);
	lst->next = last;
	last = ft_create_elem(t2);
	lst->next->next = last;
	last = ft_create_elem(t3);
	lst->next->next->next = last;
	ft_list_clear(lst,free);
	//////////////////////////////////////////////////////
	printf("\033[0;32mIF TEST CRUSHES - TEST IS OK\n\n");
    reset();

	free(lst);
	
    return (0);
}
