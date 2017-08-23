#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int i;
	char *dest;

	i = 0;
	dest = ft_memalloc(sizeof(char) * len);
	if (dest)
	{
		while (s[i])
		{
			if (i == start)
				break ;
			i++;
		}
		ft_strncpy(dest, &s[i], len);
	}
	return (dest);
}
