/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 22:01:03 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/05 22:09:54 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		if (root->left != 0)
			btree_apply_suffix(root->left, apply);
		if (root->right != 0)
			btree_apply_suffix(root->right, apply);
		apply(right->item);
	}
}
