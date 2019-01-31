/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:42:42 by recharif          #+#    #+#             */
/*   Updated: 2017/11/29 19:02:44 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/handle_funcs.h"
#include "../libft/libft.h"
#include "../include/utils.h"
#include <stdarg.h>

static ssize_t	sign(double nbr, uintmax_t nbrint, t_arg *arg)
{
	char	*prefix;

	if (nbr < 0)
	{
		nbr = -nbr;
		prefix = "-";
	}
	else if (arg->force_sign)
		prefix = "+";
	else if (arg->blank_sign)
		prefix = " ";
	else
		prefix = "";
	return (floatprefix(nbr, nbrint, arg, prefix));
}

ssize_t			handle_float(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbrint;
	double		nbr;

	(void)format;
	if (arg->got_precision)
		arg->pad_zeroes = 0;
	nbr = va_arg(*args, double);
	nbrint = (uintmax_t)nbr;
	if (nbr < 0 || arg->force_sign || arg->blank_sign)
		return (sign(nbr, nbrint, arg));
	else
		return (printfloat(nbr - (double)nbrint, nbrint, arg, 0));
}

ssize_t			printfloat(double nbr, uintmax_t nint, t_arg *arg,
		size_t nbr_len)
{
	int			i;
	uintmax_t	lastpart;

	if (arg->got_precision)
		i = arg->precision;
	else
		i = 6;
	ft_putnbrbase(nint, "0123456789");
	ft_putstr(".");
	while (i-- > 0)
		nbr *= 10;
	nbr += 1e-9;
	lastpart = (uintmax_t)nbr;
	ft_putnbrbase(lastpart, "0123456789");
	return ((ssize_t)((uintmax_t)nbr_len + nbrlen(nint, "0123456789") +
	nbrlen((uintmax_t)nbr, "0123456789") + 1));
}
