#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

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
	t_list *lst = ft_create_elem("NULL");
	ft_list_push_front(&lst, "0");

	printf("Status: ");
    if (strcmp((char *)(lst->next->data),"NULL") == 0 && lst->next->next == NULL)
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
    if (( strcmp((char *)(lst->next->next->data),"NULL") == 0 && lst->next->next->next == NULL))
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
