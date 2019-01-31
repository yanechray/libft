/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_escape.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 18:48:13 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 17:59:16 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/handle_funcs.h"
#include "../libft/libft.h"
#include "../include/utils.h"

ssize_t	handle_escape(char **format, va_list *args, t_arg *arg)
{
	(void)format;
	(void)args;
	(void)arg;
	if (arg->got_width && !arg->right_pad)
		width_pad(1, arg->width, arg->pad_zeroes ? '0' : ' ');
	ft_putchar('%');
	if (arg->got_width && arg->right_pad)
		width_pad(1, arg->width, ' ');
	return (arg->got_width ? ft_max(arg->width, 1) : 1);
}
