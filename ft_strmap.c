/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:26:09 by recharif          #+#    #+#             */
/*   Updated: 2016/11/14 17:14:03 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	if (s)
	{
		res = ft_memalloc(ft_strlen(s) + 1);
		if (res)
		{
			while (s[i])
			{
				res[i] = f(s[i]);
				i++;
			}
			res[i] = 0;
			return (res);
		}
	}
	return (0);
}
