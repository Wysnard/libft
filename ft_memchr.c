/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:40:10 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 15:41:28 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;

	if (s == NULL)
		return (NULL);
	tmp = (void *)s;
	while (n--)
	{
		if (*tmp == c)
			return ((void *)tmp);
		tmp++;
	}
	return (NULL);
}
