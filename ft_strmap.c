#include "libft.h"

char *ft_strmap(const char *s, char (*f)(char))
{
	char *map;
	int i;

	i = 0;
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	if (f)
	{
		while (s[i])
		{
			map[i] = f(s[i]);
			i++;
		}
	}
	map[i] = '\0';
	return (map);
}
