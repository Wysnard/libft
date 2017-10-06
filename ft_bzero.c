#include "libft.h"

void ft_bzero(void *s, size_t len)
{
	char *cp;

	cp = (char *)s;
	while (len--)
	{
		*cp = '\0';
		cp++;
	}
}
