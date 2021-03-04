/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:04:29 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 22:25:11 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[0], tab[1]) > 0)
		{
			if (!(f(tab[i], tab[i + 1]) > 0))
				return (0);
		}
		if (f(tab[0], tab[1]) < 0)
		{
			if (!(f(tab[i], tab[i + 1]) < 0))
				return (0);
		}
		if (f(tab[0], tab[1]) == 0)
		{
			if (f(tab[i], tab[i + 1]) != 0)
				return (0);
		}
		i++;
	}
	return (1);
}
