/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:08:23 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/02 16:44:41 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *outtab;

	i = 0;
	outtab = (int*)malloc(sizeof(int) * length);
	if (outtab == 0)
		return (0);
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
	return (tab);
}
