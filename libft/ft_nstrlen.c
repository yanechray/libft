/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 20:22:57 by recharif          #+#    #+#             */
/*   Updated: 2016/01/28 20:24:06 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nstrlen(const char *str, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (*str++ && i < maxlen)
		i++;
	return (i);
}
