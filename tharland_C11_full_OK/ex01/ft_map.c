/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 00:43:53 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 22:22:46 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *dest;

	i = 0;
	dest = malloc(sizeof(*dest) * lenght);
	while (i < lenght)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
