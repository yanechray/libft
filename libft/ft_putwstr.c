/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:34:06 by recharif          #+#    #+#             */
/*   Updated: 2016/01/26 15:07:37 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <unistd.h>
#include "libft.h"

void	ft_putwstr(wchar_t const *str)
{
	ft_putwstr_fd(str, STDOUT_FILENO);
}
