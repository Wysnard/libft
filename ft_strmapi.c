/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:56:56 by vlay              #+#    #+#             */
/*   Updated: 2017/11/06 19:57:05 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	int		i;

	i = 0;
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	if (f)
		while (s[i])
		{
			map[i] = f(i, s[i]);
			i++;
		}
	map[i] = '\0';
	return (map);
}
