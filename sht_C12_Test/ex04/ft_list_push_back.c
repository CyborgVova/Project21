/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shterica <shterica@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 20:45:18 by shterica          #+#    #+#             */
/*   Updated: 2021/03/04 20:45:34 by shterica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = new_elem;
	else
	{
		last = ft_list_last(*begin_list);
		last->next = new_elem;
	}
}
