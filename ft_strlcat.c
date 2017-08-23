#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	if (size < ft_strlen(src))
		return (size + ft_strlen(src));
	ft_strncat(dest, src, size);
	return (ft_strlen(dest) + ft_strlen(src));
}
