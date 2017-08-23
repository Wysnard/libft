#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *map;
	int i;

	i = 0;
	if (map = (char*)ft_memalloc(sizeof(s) * ft_strlen(s)))
		while (map[i] = f(i, s[i]))
			i++;
	return (map);
}
