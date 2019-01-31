/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_handlers.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 20:02:58 by recharif          #+#    #+#             */
/*   Updated: 2016/11/12 01:50:14 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_HANDLERS_H
# define PARSE_HANDLERS_H
# include "../include/handle_funcs.h"

char	*parse_flags(char **format, t_arg *arg);
char	*parse_width(char **format, va_list *list, t_arg *arg);
char	*parse_precision(char **format, va_list *list, t_arg *arg);
char	*parse_length(char **format, t_arg *arg);
#endif
