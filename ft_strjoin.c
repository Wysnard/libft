#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *dest;

	if (dest = ft_memalloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)))
	{
		ft_strcpy(dest, s1);
		ft_strcat(dest, s2);
	}
	return (dest);
}
