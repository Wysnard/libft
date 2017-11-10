/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:22:15 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 18:23:21 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char			*d;
	const	char	*s;

	if (len == 0 || dest == src)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	while (len-- && *s)
		*d++ = *s++;
	*d = *s;
	return (dest);
}
