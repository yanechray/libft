/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:24:55 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 17:59:50 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/handle_funcs.h"
#include "../include/ft_printf.h"
#include "../libft/libft.h"

ssize_t	handle_long(char **format, va_list *args, t_arg *arg)
{
	arg->length = l;
	return (get_handler(ft_tolower(**format))(format, args, arg));
}
