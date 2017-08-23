#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *tmp;

	if (s == NULL)
		return (NULL);
	tmp = (void *)s;
	while (n--)
	{
		if (*tmp == c)
			return ((void *)tmp);
		*tmp++;
	}
	return (NULL);
}
