#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dest;

	if(!(dest = ft_strnew(ft_strlen(s))))
		return (NULL);
	return(ft_strcpy(dest, s));
}
