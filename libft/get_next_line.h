/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:44:36 by recharif          #+#    #+#             */
/*   Updated: 2017/09/19 18:04:34 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# define BUFF_SIZE 32

typedef	struct		s_fd
{
	int				fd;
	char			*reste;
	struct s_fd		*next;
	struct s_fd		*origine;
}					t_fd;

int					get_next_line(int const fd, char **line);

#endif
