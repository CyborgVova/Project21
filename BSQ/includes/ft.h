/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:05:51 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/10 19:41:06 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include "ft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFFER	4000

char	*ft_double_massive(char *file);
char	*ft_open_file(char *file);
int		ft_check(char *str, int len);
int		ft_strlen(char *str);
#endif
