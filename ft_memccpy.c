#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t int		i;
	const unsigned char	l;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	l = (const unsigned char) c;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
