#include "libft.h"

int ft_atoi(const char *nptr)
{
	int nb;
	int sign;

	sign = 1;
	nb = 0;
	while (*nptr <= 32)
		*nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		*nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nb = nb * 10 + *nptr - '0';
		*nptr++;
	}
	return (nb * sign);
}
