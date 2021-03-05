/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shterica <shterica@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 23:21:46 by shterica          #+#    #+#             */
/*   Updated: 2021/03/04 23:22:47 by shterica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_free_elem(t_list *elem, void (*free_fct)(void *))
{
	if (elem->data != NULL)
		free_fct(elem->data);
	free(elem);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,\
							int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*prev;
	t_list	*next;
	t_list	*to_clean;

	prev = NULL;
	curr = *begin_list;
	while (curr != NULL)
	{
		next = curr->next;
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			to_clean = curr;
			if (prev != NULL)
				prev->next = next;
			else
				*begin_list = next;
			ft_list_free_elem(to_clean, free_fct);
		}
		prev = curr;
		curr = next;
	}
}
