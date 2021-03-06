/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:51:50 by recharif          #+#    #+#             */
/*   Updated: 2016/11/24 14:51:52 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(int n)
{
	int				len;
	unsigned int	nb;

	len = 1;
	nb = n;
	if (n == 0)
		len++;
	else if (n < 0)
	{
		nb = -n;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int				i;
	unsigned int	x;
	int				sign;
	char			*buf;

	i = ft_countchars(n) - 1;
	if ((buf = (char *)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	x = n;
	if ((sign = n) < 0)
		x = -n;
	buf[i] = 0;
	if (x == 0)
		buf[--i] = '0';
	while (x > 0)
	{
		buf[--i] = x % 10 + '0';
		x /= 10;
	}
	if (sign < 0)
		buf[0] = '-';
	return (buf);
}
