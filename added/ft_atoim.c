#include "../libft.h"

intmax_t	ft_atoim(const char *str)
{
	intmax_t	nb;
	intmax_t	sign;

	nb = 0;
	sign = 1;
	while (*str == ' ' || *str < 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}
