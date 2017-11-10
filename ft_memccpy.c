/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:22:41 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 18:24:27 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < len && s[i])
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
