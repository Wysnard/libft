#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*cp;

	if (s == NULL)
		return (NULL);
	cp = s;
	while (len)
	{
		*cp = c;
		cp++;
		len--;
	}
	return (s);
}
