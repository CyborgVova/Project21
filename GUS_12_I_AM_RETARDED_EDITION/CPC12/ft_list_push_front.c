/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrendon <hbrendon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:11:16 by hbrendon          #+#    #+#             */
/*   Updated: 2021/03/04 16:43:13 by hbrendon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *curr;

	
	if (begin_list == NULL)
	{	
		*begin_list = ft_create_elem(data);
		return ;
	} 
	curr = *begin_list;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = ft_create_elem(data);
}
