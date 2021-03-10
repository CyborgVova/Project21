/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:27:42 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/10 19:44:42 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*ft_open_file(char *file)
{
	int 	fd;
	int 	rd;
	char *out;

	if ((fd = open(file, O_RDONLY)) == -1)
		exit(-1);
	if (!(file = (char*)malloc(sizeof(file) * (BUFFER + 1))))
		exit(-1);
	if ((rd = read(fd, file, BUFFER)) == -1)
		exit(-1);
	file[rd] = '\0';
	close(fd);
	out = ft_double_massive(file);
	free(file);
	return (out);
}
