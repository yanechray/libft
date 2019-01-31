/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlheight.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:44:43 by recharif          #+#    #+#             */
/*   Updated: 2016/11/11 14:45:11 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_avlheight(t_avl *node)
{
	if (node == NULL)
		return (0);
	else
		return (node->height);
}
