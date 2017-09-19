#include "libft.h"

int ft_atoi(const char *nptr)
{
	int nb;
	int sign;

	nb = 0;
	sign = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		nb = nb * 10 + (*nptr - '0');
		nptr++;
	}
	return (nb * sign);
}
