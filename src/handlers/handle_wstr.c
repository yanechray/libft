/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_wstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 18:43:43 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 18:01:05 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../libft/libft.h"
#include "../include/ft_printf.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

static size_t	calc_wstrlen(wchar_t *str, int precision, size_t i)
{
	if (*str == '\0' || precision == 0)
		return (i);
	else if (*str <= 0x7F)
		return (calc_wstrlen(str + 1, precision - 1, i + 1));
	else if (*str <= 0x7FF && precision >= 2)
		return (calc_wstrlen(str + 1, precision - 2, i + 2));
	else if (*str <= 0xFFFF && precision >= 3)
		return (calc_wstrlen(str + 1, precision - 3, i + 3));
	else if (*str <= 0x10FFFF && precision >= 4)
		return (calc_wstrlen(str + 1, precision - 4, i + 4));
	else
		return (i);
}

static size_t	ft_wstrlen(wchar_t *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		if (*str <= 0x7F)
			i++;
		else if (*str <= 0x7FF)
			i += 2;
		else if (*str <= 0xFFFF)
			i += 3;
		else if (*str <= 0x10FFFF)
			i += 4;
		str++;
	}
	return (i);
}

ssize_t			handle_wstr(char **format, va_list *args, t_arg *arg)
{
	wchar_t	*str;
	size_t	strlen;

	(void)format;
	(void)arg;
	str = va_arg(*args, wchar_t*);
	if (str == NULL)
		str = L"(null)";
	strlen = arg->got_precision ? calc_wstrlen(str, arg->precision, 0) :
			ft_wstrlen(str);
	if (arg->got_width && !arg->right_pad)
		width_pad(strlen, arg->width, arg->pad_zeroes ? '0' : ' ');
	ft_putnwstr(str, strlen);
	if (arg->got_width && arg->right_pad)
		width_pad(strlen, arg->width, ' ');
	return (arg->got_width ? FT_MAX(strlen, arg->width) : strlen);
}
