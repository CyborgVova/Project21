#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

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

int		my_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void print(void *data)
{
	printf("%s\n", data);
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
	//t_list *check;
	int flag;
	char *strs[] = {"a","ab","NICE","abcd"};
	lst = ft_list_push_strs(0, strs);
	ft_list_remove_if(&lst, "NICE", my_strcmp, print);
	//////////////////////////////////////////////////////

	

	//////////////////////////////////////////////////////

	flag = 0;
	lst = ft_list_push_strs(4, strs);
	ft_list_remove_if(&lst, "NICE", my_strcmp, print);
	//////////////////////////////////////////////////////
	
	//////////////////////////////////////////////////////

	flag = 0;
	lst = ft_list_push_strs(3, strs);
	ft_list_remove_if(&lst, "NICE", my_strcmp, print);
	//////////////////////////////////////////////////////
	
	//////////////////////////////////////////////////////

	flag = 0;
	lst = ft_list_push_strs(2, strs + 2);
	ft_list_remove_if(&lst, "NICE", my_strcmp, print);
	//////////////////////////////////////////////////////

    return (0);
}
