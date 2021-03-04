/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 17:11:29 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 18:03:09 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int negative;
	int value;

	negative = 1;
	value = 0;
	while ((*str == ' ') || (*str <= 13 && *str >= 9))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			negative *= -1;
		}
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		value = value * 10 + *str - '0';
		str++;
	}
	return (value * negative);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] == s1[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else if (nb != -2147483648)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
