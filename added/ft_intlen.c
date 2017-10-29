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
