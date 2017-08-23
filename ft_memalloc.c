#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *tmp;

	if (tmp = malloc(size))
		return (tmp);
	return (NULL);
}
