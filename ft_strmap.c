#include "libft.h"

char *ft_strmap(const char *s, char (*f)(char))
{
	char *map;
	int i;

	i = 0;
	if (map = (char*)ft_memalloc(sizeof(s) * ft_strlen(s)))
		while (map[i] = f(s[i]))
			i++;
	return (map);
}
