/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shterica <shterica@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:49:41 by shterica          #+#    #+#             */
/*   Updated: 2021/03/04 22:57:01 by shterica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define NULL 0

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	while ((begin_list != NULL) && (i < nbr))
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

void	ft_list_swap_next(t_list *a, t_list *b)
{
	t_list *tmp;

	tmp = a->next;
	a->next = b->next;
	b->next = tmp;
	tmp = a->next->next;
	a->next->next = b->next->next;
	b->next->next = tmp;
}

void	ft_list_reverse(t_list **begin_list)
{
	int		i;
	int		j;
	int		length;
	t_list	*el_i;
	t_list	*el_j;

	lenght = ft_list_size(*begin_list);
	if (length < 2)
		return ;
	i = 0;
	j = length - 2;
	while (i < j)
	{
		el_i = ft_list_at(*begin_list, i++);
		el_j = ft_list_at(*begin_list, j--);
		ft_list_swap_next(el_i, el_j);
	}
	el_j = ft_list_last(*begin_list);
	el_i = *begin_list;
	*begin_list = el_i->next;
	el_j->next = el_i;
	el_j->next->next = NULL;
}
