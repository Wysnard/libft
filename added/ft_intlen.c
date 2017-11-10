/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:04:31 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:04:47 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_intlen(int nb, int base)
{
	int	i;

	i = 0;
	while (nb)
	{
		i++;
		nb /= base;
	}
	return (i);
}
