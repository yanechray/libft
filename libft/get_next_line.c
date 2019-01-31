/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:42:50 by recharif          #+#    #+#             */
/*   Updated: 2017/06/27 13:02:29 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_fd				*get_fd(t_fd *lst_fd, int fd)
{
	t_fd			*l_tmp;

	l_tmp = lst_fd;
	if (l_tmp)
	{
		while (l_tmp->next)
		{
			if (l_tmp->fd == fd)
				return (l_tmp);
			l_tmp = l_tmp->next;
		}
		if (l_tmp->fd == fd)
			return (l_tmp);
		if (!(l_tmp->next = (t_fd *)malloc(sizeof(t_fd))))
			return (NULL);
		l_tmp = l_tmp->next;
	}
	else if (!(l_tmp = (t_fd *)malloc(sizeof(t_fd))))
		return (NULL);
	l_tmp->fd = fd;
	l_tmp->reste = ft_strdup("");
	l_tmp->next = NULL;
	l_tmp->origine = (!lst_fd) ? l_tmp : lst_fd;
	return (l_tmp);
}

size_t				chk_eol(char *str)
{
	int				index;

	index = -1;
	if (str)
	{
		while (str[++index] != '\0')
		{
			if (str[index] == '\n')
				return (index + 1);
		}
	}
	return (0);
}

int					read_line(int fd, char *buf)
{
	int				ret;

	if ((ret = read(fd, buf, BUFF_SIZE)) != -1)
		buf[ret] = '\0';
	return (ret);
}

char				*joinstr(char *s1, char *s2)
{
	char			*tmp;

	tmp = ft_strjoin(s1, s2);
	if (s1)
		ft_memdel((void **)&s1);
	return (tmp);
}

int					get_next_line(int const fd, char **line)
{
	static t_fd		*l_fd = NULL;
	char			buf[BUFF_SIZE + 1];
	int				i;
	int				e;

	e = 0;
	if (fd < 0 || line == NULL)
		return (-1);
	l_fd = get_fd(l_fd, fd);
	while (fd >= 0 && ((i = chk_eol(l_fd->reste)) ||
						(e = read_line(fd, buf)) > 0) && i == 0)
		l_fd->reste = joinstr(l_fd->reste, buf);
	if (e == -1)
		return (-1);
	if (i > 0)
		l_fd->reste[i - 1] = '\0';
	*line = ft_strdup(l_fd->reste);
	l_fd->reste = ((i > 0) ? ft_strdup(l_fd->reste + i) :
						ft_strdup(""));
	l_fd = l_fd->origine;
	return ((i || **line) ? 1 : 0);
}
