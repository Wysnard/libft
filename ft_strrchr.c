#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *tmp;
	char *occu;

	occu = NULL;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == ((unsigned char)c)
			occu = tmp;
		tmp++;
	}
	return (occu);
}
