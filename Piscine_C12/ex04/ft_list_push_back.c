/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:04:14 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/04 19:25:04 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = *begin_list;
	if (!tmp)
		tmp = ft_create_elem(date);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}
