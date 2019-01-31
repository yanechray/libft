/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:14:14 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 02:02:16 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

ssize_t	handle_hex(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbr;

	nbr = get_unsigned_from_length(args, arg);
	if (**format == 'X')
		return (handle_uint(nbr, arg, "0123456789ABCDEF", "0X"));
	else
		return (handle_uint(nbr, arg, "0123456789abcdef", "0x"));
}
