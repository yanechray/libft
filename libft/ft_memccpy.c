/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:46:16 by recharif          #+#    #+#             */
/*   Updated: 2016/11/09 12:01:30 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	while (n && *strsrc != c)
	{
		*strdst++ = *strsrc++;
		n--;
	}
	if (n > 0)
	{
		*strdst++ = *strsrc++;
		return ((void*)strdst);
	}
	return (NULL);
}
