#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dest;

	if(!(dest = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	return(ft_strcpy(dest, s));
}
