#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)());

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
	
	char *strs[] = {"b","a","c","A","abc"};
	lst = ft_list_push_strs(0, strs);
	ft_list_sort(&lst, strcmp);

	
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

	//////////////////////////////////////////////////////
	lst = ft_list_push_strs(5, strs);
	char *corrstr[] = {"A","a","abc","b","c"};
	ft_list_sort(&lst, strcmp);
	int cnt = 0;
	int flag = 0;
	//////////////////////////////////////////////////////
	while (lst != NULL)
	{
		
		if ((strcmp((char *)lst->data, *(corrstr + cnt))) != 0)
		{
			flag = -1;
			printf("%d ", cnt);
			printf("%s ", (char *)lst->data);
			printf("%s\n", *(corrstr + cnt));
		}
		
		cnt++;
		lst = lst->next;
		
	}
	printf("Status: ");
    if (flag == 0)
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
	
    return (0);
}
