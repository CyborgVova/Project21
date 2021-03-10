/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_massive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:09:18 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/10 19:44:01 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_double_massive(char *file)
{
	int		i;
	int		row;
	char	*out;

	i = 0;
	row = 0;
	out = malloc(BUFFER + 1);
	while (file[i] != '\n')
		i++;
	i++;
	while (file[i] != '\0')
	{
		while (file[i] != '\n')
		{
			out[row++] = file[i++];
		}
			out[row++] = file[i++];
	}
	return (out);
}
