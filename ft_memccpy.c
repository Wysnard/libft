#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	char *d;
	const char *s;

	if (src == NULL)
		return (NULL);
	s = src;
	d = dest;
	while (*d++ = *s++)
	{
		if (len == 0)
			break ;
		if (*s == c)
		{
			*d++ = *s++;
			break ;
		}
		len--;
	}
	return (dest);
}
