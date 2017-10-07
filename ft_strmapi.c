#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *map;
	int i;

	i = 0;
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	if (f)
		while (s[i])
		{
			map[i] = f(i, s[i]);
			i++;
		}
	map[i] = '\0';
	return (map);
}
