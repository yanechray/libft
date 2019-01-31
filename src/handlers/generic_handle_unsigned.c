/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generic_handle_unsigned.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 21:12:28 by recharif          #+#    #+#             */
/*   Updated: 2017/11/26 21:16:32 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <sys/types.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

static void	ft_putnbrbp(uintmax_t nbr, char *base, t_arg *arg,
		unsigned int nbr_len)
{
	if (arg->got_precision)
	{
		if (arg->pad_zeroes && arg->force_prefix)
			width_pad(nbr_len + 2, arg->precision, base[0]);
		else
			width_pad(nbr_len, arg->precision, base[0]);
	}
	if (nbr == 0 && arg->got_precision && arg->precision == 0)
		return ;
	else
		ft_putnbrbase(nbr, base);
}

static void	ft_arg_precision(t_arg *arg, unsigned int nbr_len)
{
	if (arg->got_precision)
		arg->precision = ft_max(arg->width, arg->precision);
	else
		arg->precision = ft_max(arg->width, nbr_len);
	arg->got_precision = 1;
	arg->got_width = 0;
}

ssize_t		handle_uint(uintmax_t nbr, t_arg *arg, char *base, char *prefix)
{
	unsigned int	nbr_len;
	unsigned int	nbrstrlen;

	if (arg->got_precision)
		arg->pad_zeroes = 0;
	nbr_len = nbrlen(nbr, base);
	if (arg->got_width && !arg->right_pad && arg->pad_zeroes)
		ft_arg_precision(arg, nbr_len);
	nbrstrlen = calc_nbrstrlen(nbr, base, prefix, arg);
	if (arg->got_width && !arg->right_pad)
		width_pad(nbrstrlen, arg->width, ' ');
	if (arg->force_prefix && prefix != NULL && nbr != 0)
	{
		ft_putstr(prefix);
		ft_putnbrbp(nbr, base, arg, nbr_len);
		if (arg->pad_zeroes)
			nbrstrlen -= 2;
	}
	else
		ft_putnbrbp(nbr, base, arg, nbr_len);
	if (arg->got_width && arg->right_pad)
		width_pad(nbrstrlen, arg->width, ' ');
	return (arg->got_width ? ft_max(nbrstrlen, arg->width) : nbrstrlen);
}
