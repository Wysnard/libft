#include "libft.h"

int ft_isalnum(int c)
{
	if ((char)c >= 'A' && (char)c <= 'Z')
		return (1);
	else if ((char)c >= 'a' && (char)c <= 'z')
		return (2);
	else if ((char)c >= '0' && (char)c <= '9')
		return (4);
	return (0);
}
