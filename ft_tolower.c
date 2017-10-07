#include "libft.h"

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return ((int)c + 32);
	return (c);
}
