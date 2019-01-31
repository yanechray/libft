/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_pad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:05:11 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 18:02:18 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	width_pad(int nbrstrlen, int width, char padwith)
{
	while (nbrstrlen < width)
	{
		ft_putchar(padwith);
		nbrstrlen++;
	}
}
