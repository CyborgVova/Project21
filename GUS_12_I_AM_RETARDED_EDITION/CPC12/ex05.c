#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs);


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
	int cnt = 0;
	flag = 0;
	lst = ft_list_push_strs(4, strs);
	ptr = lst;
	//////////////////////////////////////////////////////
	while (ptr != NULL)
	{
		if ((strcmp((char *)ptr->data, *(strs + 4 - cnt - 1))) != 0)
		{
			flag = -1;
			printf("%d\n", cnt);
			printf("%s\n", (char *)ptr->data);
			printf("%s\n", *(strs + 4 - cnt - 1));
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
