#include "../libft.h"

char *ft_strndup(const char *s, size_t n)
{
	char *str;

	if (!(str = ft_strnew(n)))
		return (NULL);
	ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
