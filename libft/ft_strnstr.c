/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlambert <rlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:58:25 by rlambert          #+#    #+#             */
/*   Updated: 2016/11/14 15:56:00 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[0])
			while (s1[i + j] && s2[j] && s1[i + j] == s2[j] && (i + j) < n)
				j++;
		if (!s2[j])
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
