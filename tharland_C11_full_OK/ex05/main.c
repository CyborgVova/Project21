/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:16:54 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 18:09:18 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	calc(char *oper, int num1, int num2)
{
	if (!ft_strcmp("+", oper))
		ft_putnbr(plus(num1, num2));
	else if (!ft_strcmp("-", oper))
		ft_putnbr(minus(num1, num2));
	else if (!ft_strcmp("*", oper))
		ft_putnbr(multiply(num1, num2));
	else if (!ft_strcmp("/", oper))
	{
		if (num2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(del(num1, num2));
	}
	else if (!ft_strcmp("%", oper))
	{
		if (num2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(ost(num1, num2));
	}
	else
		ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	int num1;
	int num2;
	int (*f[5])(int a, int b);

	(void)argc;
	f[0] = &plus;
	f[1] = &minus;
	f[2] = &multiply;
	f[3] = &del;
	f[4] = &ost;
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	calc(argv[2], num1, num2);
	ft_putchar('\n');
	return (0);
}
