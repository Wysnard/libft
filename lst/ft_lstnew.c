/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:16:24 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:16:38 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = NULL;
	list = malloc(sizeof(*list) + content_size);
	if (list)
	{
		list->content = (content) ? (void *)content : NULL;
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
