/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_in_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:36:31 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/09 16:02:09 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_num_in_str(int nb)
{
	char	*inp;
	char	*out;
	int		i;
	int		j;

	inp = malloc(12);
	out = malloc(12);
	i = 0;
	j = 0;
	if (nb == -2147483648)
	{
		out[j++] = '-';
		out[j++] = 2 + '0';
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb *= -1;
		out[j++] = '-';
	}
	while (nb > 9)
	{
		inp[i++] = nb % 10 + '0';
		nb /= 10;
	}
	inp[i] = nb + '0';
	while (i >= 0)
		out[j++] = inp[i--];
	free(inp);
	out[j] = '\0';
	return (out);
}
