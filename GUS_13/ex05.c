#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ft_btree.h>

void	*btree_search_item(t_btree *root, void *data_ref,
int (*cmpf)(void *, void *));

//reset to original color
void reset()
{
	printf("\033[0m");
}
//green
//printf("\t\t\033[0;32mOK\n\n");
//red
//printf("\t\t\033[1;31mKO\n\n");

t_btree		*my_creator(void *thing)
{
	t_btree *next;

	next = (t_btree*)malloc(sizeof(t_btree));
	if (next == NULL)
		return (NULL);
	next->left = NULL;
	next->right = NULL;
	next->item = thing;
	return (next);
}

int my_f(void *aa, void *bb)
{
	int a;
	int b;

	a = *(int*)aa;
	b = *(int*)bb;
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}

int     main(void)
{
	t_btree *root;
	t_btree	*test;
	test = NULL;
	int		num1;
	int		num2;
	int		num3;
	int		num4;
	int		num5;
	int		num6;
	int		num7;
	int		num8;
	int		num9;
	int		num10;
	int		num11;

	num1 = 1;
	num2 = 2;
	num3 = 3;
	num4 = 4;
	num5 = 5;
	num6 = 6;
	num7 = 7;
	num8 = 8;
	num9 = 9;
	num10 = 10;
	num11 = 555;
	root = my_creator((void*)&num6);
	root->left = my_creator((void*)&num3);
	root->left->left = my_creator((void*)&num1);
	root->left->left->right = my_creator((void*)&num2);
	root->left->right = my_creator((void*)&num5);
	root->left->right->left = my_creator((void*)&num4);
	root->right = my_creator((void*)&num8);
	root->right->left = my_creator((void*)&num7);
	root->right->right = my_creator((void*)&num9);
	root->right->right->right = my_creator((void*)&num10);
	if(btree_search_item(root, &num2, &my_f) == &num2)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_search_item(root, &num6, &my_f) == &num6)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_search_item(root, &num10, &my_f) == &num10)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_search_item(root, &num11, &my_f) == NULL)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_search_item(root, &num7, &my_f) == &num7)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
    return (0);
}
