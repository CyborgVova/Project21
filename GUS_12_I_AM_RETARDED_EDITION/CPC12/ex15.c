#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void ft_list_reverse_fun(t_list *begin_list);

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*ret;
	t_list	*tmp;
	int		cnt;

	cnt = 0;
	if (size == 0)
		return (NULL);
	ret = ft_create_elem(NULL);
	while (cnt < size)
	{
		ret->data = *(strs + cnt);
		if (cnt != size - 1)
		{
			tmp = ft_create_elem(NULL);
			tmp->next = ret;
			ret = tmp;
		}
		cnt++;
	}
	return (ret);
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



int     main(void)
{
	//////////////////////////////////////////////////////
	t_list *lst;
	int flag;
	char *strs[] = {"a","ab","abc","abcd"};
	lst = ft_list_push_strs(0, strs);
	ft_list_reverse_fun(lst);
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
	t_list *ptr;
	t_list *check;

	int cnt = 0;
	flag = 0;
	lst = ft_list_push_strs(4, strs);

	
	check = lst;
	

	ft_list_reverse_fun(lst);
	ptr = lst;
	//////////////////////////////////////////////////////
	while (ptr != NULL)
	{
		if ((strcmp((char *)ptr->data, *(strs + cnt))) != 0)
		{
				flag = -1;
				printf("%d\n", cnt);
				printf("%s\n", (char *)ptr->data);
				printf("%s\n", *(strs + cnt));
		}
		cnt++;
		ptr = ptr->next;
	}
	printf("Status: ");
    if (flag == 0 && cnt == 4)
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
