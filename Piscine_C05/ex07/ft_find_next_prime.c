/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:39:34 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/23 21:41:22 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i_up;
	int i_down;

	i_down = nb;
	while (i_down > 1)
	{
		i_up = nb % i_down;
		if (i_up == 0)
		{
			nb++;
			i_down = nb;
		}
		i_down--;
	}
	return (nb);
}
