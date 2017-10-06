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
	*cp = '\0';
	while (len > 0)
	{
		*cp = '\0';
		cp++;
		len--;
	}
	return (dest);
}
