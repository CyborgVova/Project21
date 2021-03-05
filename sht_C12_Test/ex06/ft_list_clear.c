/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shterica <shterica@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 21:08:03 by shterica          #+#    #+#             */
/*   Updated: 2021/03/04 21:11:06 by shterica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;

	while (begin_list != NULL)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		if (tmp->data != NULL)
			free_fct(tmp->data);
		free(tmp);
	}
}
