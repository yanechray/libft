/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:28:28 by recharif          #+#    #+#             */
/*   Updated: 2017/05/17 16:31:30 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	unsigned char	*ret;
	unsigned char	*sauv;
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(size);
		return (ptr);
	}
	sauv = (unsigned char *)ptr;
	ret = malloc(size);
	while (i < sizeof(ret) && i < sizeof(sauv))
	{
		ret[i] = sauv[i];
		++i;
	}
	free(ptr);
	return (ret);
}
