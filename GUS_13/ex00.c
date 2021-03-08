#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ft_btree.h>

t_btree	*btree_create_node(void *item);

//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

void    ft_test(void * item)
{
	
	t_btree *res = btree_create_node(item);
    printf("Status: ");
    if (( *(int *)(res->item) == *(int *)item)
	&& res->right == NULL && res->left == NULL)
    {
    	printf("\033[0;32mOK\n\n");
        reset();
    }
    else
    {
        printf("\033[1;31mKO\n\n");
        reset();      
    }
}

int     main(void)
{
	int a;
	
	a = 1337;
	ft_test((void *)&a);
    return (0);
}
