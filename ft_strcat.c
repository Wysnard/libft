#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	char *cat;

	cat = dest;
	if (*cat)
	{
		while (*cat++)
			;
		cat--;
	}
	while (*cat++ = *src++)
		;
	*cat = '\0';
	return (dest);
}
