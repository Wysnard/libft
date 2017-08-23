#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t len)
{
	char *cp;

	cp = dest;
	if (len == 0)
		return (NULL);
	while (*cp++ = *src++)
	{
		len--;
		if (len <= 0)
			break ;
	}
	return (dest);
}
