#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ft_btree.h>

int btree_level_count(t_btree *root);

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

void	my_f(void *data)
{
	printf("%d ", *(int*)data);
}

int     main(void)
{
	t_btree *root;
	t_btree *root11;
	t_btree *root9;
	t_btree *root7;

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
	num11 = 11;
	root = my_creator((void*)&num1);
	root->left = my_creator((void*)&num2);
	root->left->right = my_creator((void*)&num4);
	root->left->left = my_creator((void*)&num3);
	root->left->left->left = my_creator((void*)&num5);
	root->left->left->left->left = my_creator((void*)&num6);
	root->right = my_creator((void*)&num7);
	root->right->right = my_creator((void*)&num8);
	root->right->right->left = my_creator((void*)&num9);
	root->right->right->right = my_creator((void*)&num10);
	//////////////////////////////////////////////////////////
	root11 = my_creator((void*)&num1);
	root11->left = my_creator((void*)&num2);
	root11->left->right = my_creator((void*)&num4);
	root11->left->left = my_creator((void*)&num3);
	root11->left->left->left = my_creator((void*)&num5);
	root11->left->left->left->left = my_creator((void*)&num6);
	root11->right = my_creator((void*)&num7);
	root11->right->right = my_creator((void*)&num8);
	root11->right->right->left = my_creator((void*)&num9);
	root11->right->right->right = my_creator((void*)&num10);
	root11->right->right->right=my_creator((void*)&num11);
	/////////////////////////////////////////////////////////
	root9 = my_creator((void*)&num1);
	root9->left = my_creator((void*)&num2);
	root9->left->right = my_creator((void*)&num4);
	root9->left->left = my_creator((void*)&num3);
	root9->left->left->left = my_creator((void*)&num5);
	root9->left->left->left->left = my_creator((void*)&num6);
	root9->right = my_creator((void*)&num7);
	root9->right->right = my_creator((void*)&num8);
	root9->right->right->left = my_creator((void*)&num9);
	root9->right->right->right = my_creator((void*)&num10);
	root9->right->right->left=my_creator((void*)&num9);
	root9->right->right->left->left=my_creator((void*)&num9);
	root9->right->right->left->left->right=my_creator((void*)&num9);
	root9->right->right->left->left->right->left=my_creator((void*)&num9);
	/////////////////////////////////////////////////////////
	root7 = my_creator((void*)&num1);
	root7->left = my_creator((void*)&num2);
	root7->left->right = my_creator((void*)&num4);
	root7->left->left = my_creator((void*)&num3);
	root7->left->left->left = my_creator((void*)&num5);
	root7->left->left->left->left = my_creator((void*)&num6);
	root7->right = my_creator((void*)&num7);
	root7->right->right = my_creator((void*)&num8);
	root7->right->right->left = my_creator((void*)&num9);
	root7->right->right->right = my_creator((void*)&num10);
	root7->left->left->left->left->left=my_creator((void*)&num7);
	if(btree_level_count(root) == 5)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_level_count(root11) == 5)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_level_count(root9) == 7)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
	if(btree_level_count(root7) == 6)
		printf("\t\t\033[0;32mOK\n\n");
	else
		printf("\t\t\033[1;31mKO\n\n");
	reset();
    return (0);
}
