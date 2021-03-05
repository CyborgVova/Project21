#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	my_f(void *data)
{
	printf("%s\n", (char*)data);
}

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
	//int flag;
	char *strs[] = {"Hello","Vvvvvvvvvvvvvvvvvv","Vnimanie, annekdot!","abcd"};
	lst = ft_list_push_strs(4, strs);
	ft_list_foreach(lst, &my_f);
    return (0);
}
