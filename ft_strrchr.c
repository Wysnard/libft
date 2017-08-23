#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *tmp;
	char *occu;

	occu = NULL;
	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (*tmp++)
		if (*tmp == c)
			occu = tmp;
	return (occu);
}
