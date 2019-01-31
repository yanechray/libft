/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:03:42 by recharif          #+#    #+#             */
/*   Updated: 2017/11/28 16:45:29 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <inttypes.h>
# include "../include/handle_funcs.h"

uintmax_t		get_unsigned_from_length(va_list *args, t_arg *arg);
void			width_pad(int nbrstrlen, int width, char padwith);
unsigned int	nbrlen(uintmax_t nbr, char *base);
unsigned int	calc_nbrstrlen(uintmax_t nbr, char *base, char *p,
		t_arg *arg);
ssize_t			nbrforceprefix(uintmax_t n, char *b, t_arg *a,
		char *p);
ssize_t			printfloat(double nbr, uintmax_t nint, t_arg *arg,
		size_t nbr_len);
ssize_t			floatprefix(double nbr, uintmax_t nbrint, t_arg *arg,
		char *prefix);
#endif
