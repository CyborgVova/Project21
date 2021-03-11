/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 12:34:57 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/11 15:11:20 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
		i++;
	while (str[i] <= '!' || str[i] >= '~')
		i--;
	j = i;
	while (str[i] >= '!' && str[i] <= '~')
		i--;
	i = i + 1;
	while (i <= j)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
