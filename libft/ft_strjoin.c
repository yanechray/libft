/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 11:41:17 by recharif          #+#    #+#             */
/*   Updated: 2016/11/14 17:15:24 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*newit;

	if (!s1 && !s2)
		return (ft_strnew(0));
	else if (!s1 && s2)
		return (ft_strdup(s2));
	else if (!s2 && s1)
		return (ft_strdup(s1));
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!new)
		return (NULL);
	newit = new;
	while (*s1)
		*newit++ = *s1++;
	while (*s2)
		*newit++ = *s2++;
	*newit = 0;
	return (new);
}
