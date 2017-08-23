#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char *tmp;

	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (*tmp++)
	{
		if (*tmp == c)
			return (tmp);
	}
	return (NULL);
}
