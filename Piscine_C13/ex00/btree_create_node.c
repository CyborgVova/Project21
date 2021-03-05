/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:58:51 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/05 22:29:42 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *frst;

	frst = (t_btree)malloc(sizeof(t_btree));
	if (frst != NULL)
	{
		frst->left = NULL;
		frst->right = NULL;
		frst->item = item;
	}
	return (frst);
}
