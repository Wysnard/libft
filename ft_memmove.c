#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	if (tmp = (char*)malloc(sizeof(char) * ft_strlen(src)))
		tmp = ft_strncpy(tmp, src, n);
	else
		return (NULL);
	dest = (void *)ft_strcpy(dest, tmp);
	free (tmp);
	return (dest);
}
