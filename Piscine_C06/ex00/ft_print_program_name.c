/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:01:09 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/24 15:44:10 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt_name(char *name);

int		main(int argc, char **argv)
{
	(void)argc;
	prnt_name(*argv);
	return (0);
}

void	prnt_name(char *name)
{
	while (*name != '\0')
	{
		write(1, name, 1);
		name++;
	}
}
