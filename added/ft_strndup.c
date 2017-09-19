#include "../libft.h"

char *ft_strndup(const char *s, size_t n)
{
	char *str;
	size_t size;

	if (n >= (size = ft_strlen(s)))
		ft_strncpy((str = ft_memalloc(sizeof(char) * size)), s, n);
	else
	{
		if (ft_strncpy((str = ft_memalloc(sizeof(char) * n)), s, n))
			str[n] = '\0';
		else
			return (NULL);
	}
	return (str);
}
