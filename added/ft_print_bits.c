/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:05:05 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:05:23 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_bits(unsigned char octet)
{
	int		i;
	char	bits[9];

	i = 0;
	while (i < 8)
	{
		bits[i] = ((octet >> i) & 1) ? '1' : '0';
		i++;
	}
	bits[8] = '\0';
	ft_strrev(bits);
	ft_putstr(bits);
}
