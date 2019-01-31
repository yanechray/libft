/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:34:34 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 15:22:38 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include <stddef.h>
#include "../include/utils.h"

ssize_t	handle_unsigned(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbr;

	(void)format;
	nbr = get_unsigned_from_length(args, arg);
	return (handle_uint(nbr, arg, "0123456789", NULL));
}
