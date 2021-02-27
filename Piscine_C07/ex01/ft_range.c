/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:04:27 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/25 19:54:04 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *out;
	int i;

	if (min >= max)
		return (NULL);
	i = max - min;
	out = malloc(sizeof(*out) * (i + 1));
	if (out == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		out[i] = min;
		min++;
		i++;
	}
	out[i] = '\0';
	return (out);
}
