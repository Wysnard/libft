#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	int		i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (len == 0)
		return (s);
	while (i < len)
		str[i++] = (unsigned char)c;
	return (s);
}
