/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:02:40 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 15:47:46 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = ft_strnew(ft_strlen(s))))
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		ft_strcpy(dest, &s[i]);
		i = 0;
		while (dest[i])
			i++;
		i--;
		while (dest[i] == '\t' || dest[i] == '\n' || dest[i] == ' ')
			i--;
		ft_bzero(&dest[i + 1], ft_strlen(&dest[i + 1]));
	}
	else
		return (NULL);
	return (dest);
}
