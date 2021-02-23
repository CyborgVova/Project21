/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:14:09 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/23 14:13:51 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int tmp;

	if (nb < 0)
		return (0);
	tmp = 1;
	if (nb != 0)
		tmp = ft_recursive_factorial(nb - 1) * nb;
	return (tmp);
}
