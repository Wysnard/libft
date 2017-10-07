#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t len)
{
	char *d;
	const char *s;

	if (len == 0 || dest == src)
		return (dest);
	s = (char *)src;
	d = (char *)dest;
	while (len--)
		*d++ = *s++;
	*d = *s;
	return (dest);
}
