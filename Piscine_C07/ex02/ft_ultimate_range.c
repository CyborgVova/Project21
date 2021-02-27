/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 19:14:56 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/26 11:57:22 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int mem;

	i = 0;
	if (min >= max)
		return (0);
	mem = max - min;
    *range = (int*)malloc(sizeof (int) * mem);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (i);
}
