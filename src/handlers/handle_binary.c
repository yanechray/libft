/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:07:44 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 02:05:32 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

ssize_t	handle_binary(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbr;

	(void)format;
	nbr = get_unsigned_from_length(args, arg);
	return (handle_uint(nbr, arg, "01", "0b"));
}
