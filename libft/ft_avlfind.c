/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avlfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recharif <recharif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:57:17 by recharif          #+#    #+#             */
/*   Updated: 2016/11/24 18:50:35 by recharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_avl	*ft_avlfind(t_avl *root, int key)
{
	if (root == NULL)
		return (NULL);
	else if (root->key == key)
		return (root);
	else if (key < root->key)
		return (ft_avlfind(root->left, key));
	else
		return (ft_avlfind(root->right, key));
}
