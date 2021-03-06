/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsuffix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/01 23:19:20 by recharif          #+#    #+#             */
/*   Updated: 2016/04/01 23:19:21 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strsuffix(const char *str, const char *suffix)
{
	const char	*str_iter;
	const char	*suffix_iter;

	str_iter = str;
	suffix_iter = suffix;
	while (*str_iter != '\0')
		str_iter++;
	while (*suffix_iter != '\0')
		suffix_iter++;
	while (suffix_iter >= suffix && str_iter >= str &&
			*str_iter == *suffix_iter)
	{
		str_iter--;
		suffix_iter--;
	}
	return (suffix_iter < suffix);
}
