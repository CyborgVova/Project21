/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:41:01 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 22:26:31 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *a, char *b)
{
	while (*a != '\0' && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j], tab[i]) > 0)
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
