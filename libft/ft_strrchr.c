/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:35:25 by recharif          #+#    #+#             */
/*   Updated: 2016/11/09 12:41:21 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_pos = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last_pos);
}
