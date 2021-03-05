/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:38:36 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/05 22:00:02 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		if (root->left != 0)
			btree_apply_infix(root->left, apply);
		apply(root->item);
		if (root->right != 0)
			btree_apply_infix(root->right, apply);
	}
}
