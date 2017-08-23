#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *dest;
	int i;

	i = 0;
	if(dest = ft_memalloc(sizeof(char) * ft_strlen(s)))
	{
		while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		ft_strcpy(dest, &s[i]);
		i = 0;
		while (dest[i])
			i++;
		i--;
		while (dest[i] == '\t' || dest[i] == '\n' || dest[i] == ' ')
			i--;
		dest[i + 1] = '\0';
	}
	return (dest);
}
