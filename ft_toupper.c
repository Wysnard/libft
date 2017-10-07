#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return ((int)c - 32);
	return (c);
}
