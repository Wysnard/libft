#include "libft.h"

void ft_bzero(void *s, size_t len)
{
	char *cp;

	if (s == NULL)
		return;
	cp = s;
	while (len)
	{
		*cp = 0;
		cp++;
		len--;
	}
}
