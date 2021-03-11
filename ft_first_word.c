/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:13:16 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/11 15:14:25 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		while ((*str <= 9 && *str >= 12) || *str == ' ')
			str++;
		while (*str >= '!' && *str <= '~')
			write(1, str++, 1);
		*str = '\0';
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
