/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 18:27:36 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 18:00:28 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"
#include <stdint.h>

ssize_t	handle_ptr(char **format, va_list *args, t_arg *arg)
{
	char		*base;
	uintmax_t	nbr;

	(void)format;
	arg->length = z;
	if (arg->got_precision)
		arg->pad_zeroes = 0;
	base = "0123456789abcdef";
	nbr = get_unsigned_from_length(args, arg);
	return (nbrforceprefix(nbr, base, arg, "0x"));
}
