/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:28:11 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/05 21:41:04 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		(*applyf)(root->item);
		if (root->left != 0)
			btree_apply_prefix(root->left, applyf);
		if (root->right != 0)
			btree_apply_prefix(root->right, applyf);
	}
}
