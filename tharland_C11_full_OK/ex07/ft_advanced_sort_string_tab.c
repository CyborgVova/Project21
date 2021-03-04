/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:55:06 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 22:27:23 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	int		j;
	int		i;
	char	*tmp;

	j = 0;
	i = 1;
	while (tab[j] != 0)
	{
		while (tab[i] != 0)
		{
			if (cmp(tab[j], tab[i]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		j++;
		i = j + 1;
	}
}
