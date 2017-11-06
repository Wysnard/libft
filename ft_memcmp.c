/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:41:25 by vlay              #+#    #+#             */
/*   Updated: 2017/11/06 19:41:56 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned	char	*src1;
	unsigned	char	*src2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n-- && *src1 == *src2)
	{
		src1++;
		src2++;
		if (src1 == '\0' && src2 == '\0')
			return (0);
	}
	return (*src1 - *src2);
}
