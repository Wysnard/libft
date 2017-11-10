/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlay <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:04:52 by vlay              #+#    #+#             */
/*   Updated: 2017/11/10 16:05:01 by vlay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_power(int nb, int power)
{
	if (nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (nb * ft_power(nb, power - 1));
}
