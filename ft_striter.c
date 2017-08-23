#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (s == NULL || *s == '\0')
		return ;
	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
