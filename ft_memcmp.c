#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n));
}
