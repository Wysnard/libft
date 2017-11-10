/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:18:21 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:18:45 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_lsttoa(t_list *list)
{
	t_list	*tmp;
	int		len;
	char	*result;

	len = 0;
	if (!(tmp = list))
		return (NULL);
	while (tmp)
	{
		if (list->content == NULL)
			break ;
		len += ft_strlen(list->content);
		tmp = tmp->next;
	}
	result = ft_strnew(len);
	while (list)
	{
		if (list->content == NULL)
			break ;
		ft_strcat(result, list->content);
		list = list->next;
	}
	return (result);
}
