/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:09:51 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 17:59:02 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

ssize_t	handle_char(char **format, va_list *args, t_arg *arg)
{
	(void)format;
	if (arg->length == l)
		return (handle_wchar(format, args, arg));
	else
	{
		if (arg->got_width && !arg->right_pad)
			width_pad(1, arg->width, arg->pad_zeroes ? '0' : ' ');
		ft_putchar(va_arg(*args, int));
		if (arg->got_width && arg->right_pad)
			width_pad(1, arg->width, ' ');
		return (arg->got_width ? ft_max(arg->width, 1) : 1);
	}
}
