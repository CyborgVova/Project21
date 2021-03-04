/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:32:07 by tharland          #+#    #+#             */
/*   Updated: 2021/03/03 17:49:24 by tharland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_strcmp(char *s1, char *s2);
int		plus(int a, int b);
int		minus(int a, int b);
int		multiply(int a, int b);
int		del(int a, int b);
int		ost(int a, int b);
int		ft_atoi(char *str);
void	ft_putchar(char s);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	calc(char *oper, int num1, int num2);
#endif
