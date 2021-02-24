/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:46:04 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/24 19:02:41 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt_args(char *name);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	(void)argc;
	(void)argv;
	while (i != argc)
	{
		prnt_args(argv[i]);
		i++;
	}
	return (0);
}

void	prnt_args(char *name)
{
	while (*name != '\0')
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}
