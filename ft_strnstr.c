/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:59:55 by vlay              #+#    #+#             */
/*   Updated: 2017/11/06 20:00:37 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t len)
{
	int	j;
	int	l;

	j = 0;
	if (aiguille == NULL || *aiguille == '\0')
		return ((char *)meule_de_foin);
	while (meule_de_foin[j] && len)
	{
		l = (ft_strlen(aiguille) < len) ? ft_strlen(aiguille) : len;
		if (ft_strnequ(&meule_de_foin[j], aiguille, l))
			return ((char *)&meule_de_foin[j]);
		j++;
		len--;
	}
	return (NULL);
}
