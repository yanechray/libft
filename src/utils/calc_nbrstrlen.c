/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_nbrstrlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 18:45:25 by recharif          #+#    #+#             */
/*   Updated: 2017/08/07 18:01:35 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>
#include "../libft/libft.h"
#include "../include/handle_funcs.h"
#include "../include/utils.h"

unsigned int	calc_nbrstrlen(uintmax_t nbr, char *base,
		char *p, t_arg *arg)
{
	unsigned int	nbr_len;
	unsigned int	nbrstrlen;

	nbr_len = nbrlen(nbr, base);
	if (nbr == 0 && arg->got_precision && arg->precision == 0)
		nbrstrlen = 0;
	else if (arg->got_precision)
		nbrstrlen = ft_max(nbr_len, arg->precision);
	else
		nbrstrlen = nbr_len;
	if (arg->force_prefix && p != NULL && nbr != 0)
		nbrstrlen += ft_strlen(p);
	return (nbrstrlen);
}
