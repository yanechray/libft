/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:37:16 by recharif          #+#    #+#             */
/*   Updated: 2016/02/17 17:50:23 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include "libft.h"
#include <unistd.h>

void	ft_putwstr_fd(wchar_t const *str, int fd)
{
	while (*str)
		ft_putwchar_fd(*str++, fd);
}
