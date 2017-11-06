/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 20:00:58 by vlay              #+#    #+#             */
/*   Updated: 2017/11/06 20:01:06 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*occu;

	occu = NULL;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == (unsigned char)c)
			occu = tmp;
		tmp++;
	}
	return (occu);
}
