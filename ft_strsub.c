#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *dest;

	if (!s || start == 0 && len == 0)
		return (NULL);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	ft_strncpy(dest, &s[start], len);
	dest[len] = '\0';
	return (dest);
}
