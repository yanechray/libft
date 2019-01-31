/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:33:33 by recharif          #+#    #+#             */
/*   Updated: 2016/11/14 17:16:09 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	sub = ft_strnew(len);
	if (!sub)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	return (sub);
}
