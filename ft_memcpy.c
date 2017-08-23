#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
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
		len--;
	}
	return (dest);
}
