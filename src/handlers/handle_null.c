/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_null.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:48:30 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 18:00:02 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/handle_funcs.h"
#include "../include/ft_printf.h"
#include "../libft/libft.h"
#include "../include/utils.h"

ssize_t	handle_null(char **format, va_list *args, t_arg *arg)
{
	(void)args;
	if (arg->got_width && !arg->right_pad)
		width_pad(1, arg->width, arg->pad_zeroes ? '0' : ' ');
	ft_putchar(**format);
	if (arg->got_width && arg->right_pad)
		width_pad(1, arg->width, ' ');
	return (arg->got_width ? ft_max(arg->width, 1) : 1);
}
