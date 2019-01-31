/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:45:17 by recharif          #+#    #+#             */
/*   Updated: 2016/11/10 17:19:00 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dst;
	if (strsrc < strdst)
	{
		strsrc = strsrc + len - 1;
		strdst = strdst + len - 1;
		while (len > 0)
		{
			*strdst-- = *strsrc--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*strdst++ = *strsrc++;
			len--;
		}
	}
	return (dst);
}
