/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:10:06 by recharif          #+#    #+#             */
/*   Updated: 2016/11/14 14:32:23 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*prev;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	if ((first = ft_lstnew(new->content, new->content_size)))
	{
		prev = first;
		lst = lst->next;
		while (lst)
		{
			new = (*f)(lst);
			if (!(prev->next = ft_lstnew(new->content, new->content_size)))
				return (NULL);
			prev = prev->next;
			lst = lst->next;
		}
	}
	return (first);
}
