/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:19:27 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:20:05 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		ft_btree_apply_infix(root->left, applyf);
	(*applyf)(root->content);
	if (root->right != NULL)
		ft_btree_apply_infix(root->right, applyf);
}
