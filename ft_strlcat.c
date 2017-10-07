#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	end;

	i = 0;
	while (dest[i] && i < size)
		i++;
	end = i;
	while (src[i - end] && i < size - 1)
	{
		dest[i] = src[i - end];
		i++;
	}
	if (end < size)
		dest[i] = '\0';
	return (end + ft_strlen(src));
}
