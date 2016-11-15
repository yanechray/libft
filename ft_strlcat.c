/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:20:16 by recharif          #+#    #+#             */
/*   Updated: 2016/11/10 17:10:09 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;
	size_t		dlen;

	d = dest;
	s = src;
	i = n;
	while (i-- && *d)
		d++;
	dlen = d - dest;
	i = n - dlen;
	if (i == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (i != 1)
		{
			*d++ = *s;
			i--;
		}
		s++;
	}
	*d = 0;
	return (dlen + (s - src));
}
