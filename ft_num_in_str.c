/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_in_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:36:31 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/08 19:45:37 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_rev(int nb)
{
	char	*inp;
	char	*out;
	int		i;
	int		j;

	inp = malloc(12);
	out = malloc(12);
	i = 0;
	j = 0;
	if (nb < 0)
	{
		nb *= -1;
		out[0] = '-';
		j++;
	}
	while (nb > 9)
	{
		inp[i] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	inp[i] = nb + '0';
	while (i >= 0)
		out[j++] = inp[i--];
	free(inp);
	out[j] = '\0';
	return (out);
}
