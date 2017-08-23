#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *cat;

	cat = dest;
	while (*cat++)
		;
	*cat--;
	while (*cat++ = *src++)
	{
		n--;
		if (!n)
		break ;
	}
	*cat = '\0';
	return (cat);
}
