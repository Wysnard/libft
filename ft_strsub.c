/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:02:15 by vlay              #+#    #+#             */
/*   Updated: 2017/11/06 20:02:24 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s || start == 0 && len == 0)
		return (NULL);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	ft_strncpy(dest, &s[start], len);
	dest[len] = '\0';
	return (dest);
}
