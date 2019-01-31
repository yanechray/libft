/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:06:13 by recharif          #+#    #+#             */
/*   Updated: 2016/11/10 14:23:12 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (res)
		return (ft_strcpy(res, src));
	return (NULL);
}
