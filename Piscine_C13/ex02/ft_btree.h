/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:59:02 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/05 19:58:02 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct					s_btree
{
	struct s_btree				*left;
	struct s_btree				*right;
	void						*item;
}								t_btree;
t_btree							*btree_create_node(void *item);
#endif
