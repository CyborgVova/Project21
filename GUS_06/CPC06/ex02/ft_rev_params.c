/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:24:35 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/24 18:41:32 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt_args_rev(char *name);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	(void)argc;
	(void)argv;
	argc = argc - 1;
	while (argc > i)
	{
		prnt_args_rev(argv[argc]);
		argc--;
	}
	return (0);
}

void	prnt_args_rev(char *name)
{
	while (*name != '\0')
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}
