#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	if (src1 == NULL && src == NULL)
		return (0);
	while(n-- && *src1 == *src2)
	{
		src1++;
		src2++;
		if (src1 == '\0' && src2 == '\0')
			return (0);
	}
	return (*src1 - *src2);
}
