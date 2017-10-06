#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	char *cp;

	cp = dest;
	while (*cp++ = *src++)
		;
	*cp = '\0';
	return (dest);
}
